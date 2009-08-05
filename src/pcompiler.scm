(include "symbols.scm")
(require mzlib/pregexp)

(define var-id 0)

(define (nth list idx) 
    (when (or (not (list? list))
              (not (number? idx))
              (< idx 1)
              (> idx (length list)))
        (error list idx))
    (let loop ((idx idx) 
               (list list)) 
        (if (= idx 1) 
            (car list) 
            (loop (- idx 1) 
                  (cdr list)))))


(define (make-var-name type name)
  (set! var-id (+ var-id 1))
  (string-append type
                 "_"
                 (string->code (number->string var-id))
                 "_"
                 (string->code (symbol->string name))))

(define (make-vars arg)
  (let ((var-name (make-var-name "var" arg)))
    (list arg var-name
        (string-append "object "
                       var-name
                       " = (object)make_ast_var(L\"" (symbol->string arg) "\");\n"))))


(define (make-arguments vars name)
  (let* ((name (make-var-name "array" (string->symbol name))) 
         (array (string-append "array_object " name
                               " = make_array(" (number->string (length vars))
                               ");\n")))
    (let loop ((todo vars)
               (idx 0)
               (result array))
      (if (null? todo)
          (list result name)
          (loop (cdr todo)
                (+ idx 1)
                (string-append result
                               "array_at_put(" name
                               ", " (number->string idx)
                               ", " (cadr (car todo)) ");\n"))))))
      
;; Currently buggy; you can't accept the defines to extend the
;; lambda header; you have to wrap:
;; (lambda normalargs ((lambda defines body) nil nil ...))
(define (transform-lambda-type type a-lambda outervars)
  (let* ((args (cadr a-lambda))
         (body (cddr a-lambda))
         (name (make-var-name "lambda" 'x))
         (vars (map make-vars args))
         (transformed (transform-expression-list body (append vars outervars)))
         (argarray (make-arguments (append vars (caddr transformed)) name)))
    (list (string-append
           (apply string-append (map caddr vars))
           (car transformed)
           (car argarray)
           "object " name " = make_" type "("
           (cadr argarray) ", (object)"
           (cadr transformed) ");\n")
          name '())))

(define (transform-lambda a-lambda outvars)
    (transform-lambda-type "func" a-lambda outvars))

(define (transform-dispatch a-lambda outvars)
    (transform-lambda-type "dispatch" a-lambda outvars))

(define (transform-method a-lambda outvars)
    (transform-lambda-type "m" a-lambda outvars))

(define (transform-expression-list expressions vars)
    (if (= (length expressions) 1)
        (transform-expression (car expressions) vars)
  (let* ((size (length expressions))
         (name (make-var-name "list" 'lambda))
         (code (string-append
                "list_object "
                name
                " = make_list("
                (number->string size)
                ");\n")))
    (let loop ((todo expressions)
               (idx 0)
               (prefix "")
               (code code)
               (extravars '()))
      (if (null? todo)
          (list (string-append prefix code) name extravars)
          (apply (lambda (pre c extravar)
                   (loop (cdr todo)
                         (+ idx 1)
                         (string-append prefix pre)
                         (string-append code
                                        "list_at_put(" name
                                        ", " (number->string idx)
                                        ", (object)" c ");\n")
                         (append extravar extravars)))
                 (transform-expression (car todo) (append vars extravars))))))))

(define (transform-set! expression vars)
  (unless (= (length expression) 3)
    (error "Unknown format for set!" expression))
  (let ((name (make-var-name "iassign" 'x))
        (names (transform-expression (cadr expression) vars))
        (body (transform-expression (caddr expression) vars)))
    (list (string-append
           (car names)
           (car body)
           "assign_object " name
           " = make_ast_assign(" (cadr names)
           ", (object)" (cadr body) ");\n")
          name
          '())))

(define (transform-let expression vars)
    (if (list? (cadr expression))
        (let ((names (map car (cadr expression)))
              (values (map cadr (cadr expression)))
              (body (cddr expression)))
            (transform-expression `((lambda ,names ,@body) ,@values) vars))
        (transform-named-let expression vars)))

(define (transform-named-let expression vars)
    (let ((label (cadr expression))
          (names (map car (caddr expression)))
          (values (map cadr (caddr expression)))
          (body (cdddr expression)))
        (transform-expression
            `((lambda (,label)
                (set! ,label
                    (lambda ,names ,@body))
                (,label ,@values))
              null)
            vars)))

(define (transform-letrec expression vars)
  (let ((names (map car (cadr expression)))
        (values (map cadr (cadr expression)))
        (body (cddr expression)))
    (transform-expression `((lambda ,names
                              ,@(map (lambda (name value)
                                        `(set! ,name ,value))
                                     names values)
                              ,@body) ,@(map (lambda (n) 'null) names)) vars)))

(define (transform-let* expression vars)
  (let ((names (map car (cadr expression)))
        (values (map cadr (cadr expression)))
        (body (cddr expression)))
    (transform-expression
     `((lambda ()
         ,@(let loop ((names names)
                     (values values))
            (if (null? names)
                body
                `(((lambda (,(car names))
                    ,@(loop (cdr names) (cdr values)))
                  ,(car values))))))) vars)))
        
(define (transform-define expression vars)
  (cond ((list? (cadr expression))
         (transform-define `(define ,(car (cadr expression))
                              (lambda ,(cdr (cadr expression))
                                ,@(cddr expression))) vars))
        ((pair? (cadr expression))
         (error "functions with varargs not supported yet!"))
        (else
         (let* ((varname (cadr expression))
                (name (make-var-name "defined" varname))) 
           (list (car (transform-expression
                       `(set! ,varname
                              ,@(cddr expression))
                       (cons (list varname name) vars)))
                 name
                 (list (list varname name)))))))

(define (transform-if expression vars)
  (transform-expression
   `(,(cadr expression) ; smalltalk-type booleans
     ,(caddr expression)
     ,(cadddr expression)) vars))

(define (transform-when expression vars)
  (transform-if `(if ,(cadr expression)
                     ,(caddr expression)
                     (lambda () null))))

(define (transform-unless expression vars)
  (transform-if `(if ,(cadr expression)
                     (lambda () null)
                     ,(caddr expression))))

(define (string->code s)
    (set! s (pregexp-replace* "_" s "_u_"))
    (set! s (pregexp-replace* "<" s "_lt_"))
    (set! s (pregexp-replace* "\\+" s "_plus_"))
    (set! s (pregexp-replace* "-" s "_min_"))
    (set! s (pregexp-replace* "\\|" s "_bar_"))
    (set! s (pregexp-replace* ">" s "_gt_"))
    (set! s (pregexp-replace* "=" s "_eq_"))
    (set! s (pregexp-replace* "\\?" s "_qm_"))
    (set! s (pregexp-replace* "\\[" s "_lb_"))
    (set! s (pregexp-replace* "\\]" s "_rb_"))
    (set! s (pregexp-replace* "\\{" s "_lbr_"))
    (set! s (pregexp-replace* "\\}" s "_rbr_"))
    (set! s (pregexp-replace* "'" s "_q_"))
    (set! s (pregexp-replace* "\"" s "_dq_"))
    (set! s (pregexp-replace* "\\\\" s "_bs_"))
    (set! s (pregexp-replace* "%" s "_p_"))
    (set! s (pregexp-replace* "\\$" s "_d_"))
    (set! s (pregexp-replace* "#" s "_h_"))
    (set! s (pregexp-replace* "!" s "_ex_"))
    (set! s (pregexp-replace* "@" s "_at_"))
    (set! s (pregexp-replace* "\\^" s "_car_"))
    (set! s (pregexp-replace* "&" s "_amp_"))
    (set! s (pregexp-replace* "\\*" s "_t_"))
    (set! s (pregexp-replace* "/" s "_d_"))
    (set! s (pregexp-replace* ":" s "_col_"))
    (set! s (pregexp-replace* ";" s "_sem_"))
    (set! s (pregexp-replace* "~" s "_til_"))
    (set! s (pregexp-replace* "," s "_com_"))
    (set! s (pregexp-replace* "\\." s "_dot_"))
    s)

(define (symbol->code symbol)
  (let ((s (string-append "SYMBOL" (symbol->string symbol))))
    (string->code s)))

(define (transform-new-symbol symbol vars)
  (let ((previous (assoc symbol symbols)))
    (if previous
        (list "" (cadr previous))
        (let ((code (symbol->code symbol)))
          (set! symbols (cons (list symbol code) symbols))
          (list (string-append "object " code " = (object)(void**)NULL;\n"
                               "define_symbol("
                               code ", L\""
                               (symbol->string symbol)
                               "\");\n")
                code)))))

(define (transform-quoted expression vars)
  (cond ((and (= (length expression) 2) (symbol? (cadr expression)))
         (transform-new-symbol (cadr expression) vars))
        (else (error "Only symbols are known for now."))))

(define (transform-begin expression vars)
    (transform-expression-list (cdr expression) vars))

(define (transform-case expression vars)
    (let ((totest (cadr expression))
          (branches (cddr expression)))
        (transform-expression
            (let loop ((todo branches))
                (cond 
                    ((null? todo) 'null)
                    ((eq? (car (car todo)) 'else)
                        `(begin ,@(cdr (car todo))))
                    (else
                        `(if (eq? ,totest ',(caar (car todo)))
                            (begin
                                ,@(cdr (car todo)))
                            ,(loop (cdr todo))))))
             vars)))

(define (transform-vector expression vars)
    (let* ((expressions (cdr expression))
           (name (make-var-name "vector" 'x))
           (vec (transform-expression `(Array 'basicNew: ,(length expressions))
                                      vars))
           (sym (gensym 'vec))
           (code (transform-expression
                    `((lambda (vec)
                        ,@(let loop ((i 0)
                                     (todo expressions))
                            (if (null? todo)
                                '(vec)
                                (cons `(vec 'objectAt:put: ,i ,(car todo))
                                      (loop (+ i 1) (cdr todo))))))
                       ,sym)
                     (cons (list sym (cadr vec)) vars)))
            (result (list (string-append (car vec) (car code))
                          (cadr code)
                          (caddr code)
                          )))
        result))

(define (do-load expression vars)
    (let ((f (open-input-file (cadr expression))))
        (let loop ((exp (read f))
                   (exps '()))
            (if (eof-object? exp)
                (begin
                    (close-input-port f)
                    (transform-expression `(begin ,@(reverse exps)) vars))
                (loop (read f) (cons exp exps))))))
                      

(define (transform-expression expression vars)
    #|(display "EXPRESSION:")
    (display expression)
    (newline)|#
    (cond ((list? expression)
         (case (car expression)
           ((newclass) (transform-class expression vars))
           ((case) (transform-case expression vars))
           ((begin) (transform-begin expression vars))
           ((set!) (transform-set! expression vars))
           ((lambda) (transform-lambda expression vars))
           ((dispatch) (transform-dispatch expression vars))
           ((bootstrapping-type) (list "" "null" '())) ;TODO generates overhead!!!!111
           ((method) (transform-method expression vars))
           ((define) (transform-define expression vars))
           ((quote) (transform-quoted expression vars))
           ((let) (transform-let expression vars))
           ((letrec) (transform-letrec expression vars))
           ((let*) (transform-let* expression vars))
           ((if) (transform-if expression vars))
           ((when) (transform-when expression vars))
           ((unless) (transform-unless expression vars))
           ((vector) (transform-vector expression vars))
           ((load) (do-load expression vars))
           ((list) (transform-list expression vars))
           (else (transform-application expression vars))))
        ((number? expression)  (transform-number expression vars))
        ((symbol? expression)  (transform-symbol expression vars))
        ((string? expression)  (transform-string expression vars))
        ((char? expression)    (transform-char expression vars))
        ((boolean? expression) (transform-bool expression vars))
        (else (error "Unknown type: " expression))))

(define (transform-list expression vars)
    (let loop ((result `null)
               (expression (reverse (cdr expression))))
        (if (null? expression)
            (transform-expression result vars)
            (loop `(cons ,(car expression) ,result)
                   (cdr expression)))))

(define (transform-class expression vars)
    (let ((addquote (lambda (argument) `',argument))
          (transform-method 
                (lambda (class)
                    (lambda (method)
                        (apply (lambda (name args . body)
                                    `(,class 'store:method: ',name 
                                             (method ,args ,@body)))
                                method)))))
    (let ((name (nth expression 2))
          (superclass (nth expression 3))
          (inst-vars (map addquote (nth expression 4)))
          (class-vars (map addquote (nth expression 5)))
          (inst-methods (nth expression 6))
          (class-methods (nth expression 7)))
       (transform-expression 
        `(let ((,name (,superclass 'subclass:instvars:classvars: 
                                    ',name
                                    (vector ,@inst-vars) 
                                    (vector ,@class-vars))))
                ,@(map (transform-method name) inst-methods)
                ,@(map (transform-method `(,name 'class)) class-methods)
                ,name)
        vars))))

(define (transform-number expression vars)
  (let ((name (make-var-name "number"
                            (string->symbol
                                (number->string expression)))))
    (list (string-append "object "
                         name
                         " = (object)make_constant((object)make_smallint("
                         (number->string expression)
                         "));\n") name '())))

(define (transform-bool expression vars)
    (list ""
        (if expression
            "true"
            "false")
        '()))

(define (transform-char expression vars)
  (let ((name (make-var-name "char" 'x)))
    (list (string-append "object "
                         name
                         " = (object)make_constant((object)make_char(L'"
                         (make-string 1 expression)
                         "'));\n") name '())))

(define (transform-string expression vars)
  (let ((name (make-var-name "string" 'constant))
        (os (open-output-string)))
    (write expression os)
    (list (string-append "object "
                         name
                         " = (object)make_constant((object)make_string(L"
                        (get-output-string os)
                         "));\n") name '())))

(define (transform-symbol expression vars)
  (let ((binding (assoc expression vars)))
    (if binding
        (list "" (cadr binding) '())
        (begin
          (display "Unbound identifier: " (current-error-port))
          (write expression (current-error-port))
          (newline (current-error-port))
          (error)))))

(define (transform-icall-arg app name idx)
  (string-append "set_callarg(" app
                 ", " (number->string idx)
                 ", (object)" name ");\n"))


(define (transform-application expression vars)
  (let* ((parts (map (lambda (exp) (transform-expression exp vars)) expression))
         (prefix (apply string-append (map car parts)))
         (appname (cadr (car parts)))
         (name (make-var-name "icall" (string->symbol appname)))
         
         (code (string-append "call_object "
                              name
                              " = make_ast_call((object)" appname ", "
                              (number->string (- (length parts) 1)) ");\n"))
         (args (let loop ((todo (cdr parts))
                          (idx 0)
                          (code ""))
                 (if (null? todo)
                     code
                     (loop (cdr todo)
                           (+ idx 1)
                           (string-append code
                                (transform-icall-arg
                                    name
                                    (cadr (car todo)) idx)))))))
    (list (string-append prefix code args)
          name '())))

(define (list->code input)
  (define (transform segment)
    (cond ((string? segment) segment)
          ((list? segment) (apply string-append (map transform segment)))
          ((symbol? segment) (symbol->string segment))
          ((number? segment) (number->string segment))
          (else (error "Unkown type: " segment))))
  (apply string-append
         (map (lambda (s)
                (string-append (transform s) "\n"))
              input)))

(define natives
  '(
    (*              "scheme_times")
    (+              "scheme_plus")
    (-              "scheme_minus")
    (/              "scheme_divide")
    (<              "scheme_smallerp")
    (<=             "scheme_smaller_equalp")
    (=              "scheme_equalp")
    (>              "scheme_biggerp")
    (>=             "scheme_bigger_equalp")
    ; (ast-assign     "scheme_ast_assign_new_from_variable_expression")
    ; (ast-call       "scheme_ast_call_new_from_self_size")
    ; (ast-const      "scheme_ast_const_new_from_object")
    ; (ast-list       "scheme_list_new_from_array")
    ; (ast-scoped     "scheme_ast_scoped_new_from_scope_expression_size")
    ; (ast-var        "scheme_var_new_from_string")
    ; (env            "scheme_env_new_from_id_parent_size")
    (cadr           "scheme_cadr")
    (callec         "scheme_callec")
    (car            "scheme_car")
    (cddr           "scheme_cddr")
    (cdr            "scheme_cdr")
    (char=          "scheme_chareqp")
    (cons           "scheme_cons")
    (cons?          "scheme_consp")
    (display        "scheme_display")
    (eq?            "scheme_eqp")
    (equal?         "scheme_equalp")
    (error          "scheme_error")
    (error-handler  "scheme_error_handler")
    (exit           "scheme_exit")
    (ifixed         "ifixed")
    (list?          "scheme_consp")
    (null           "null")
    (pair?          "scheme_consp")
    (string->symbol "scheme_string_to_symbol")
    (string-append  "scheme_string_append")
    (symbolp        "scheme_symbolp")
    ; Classes built in the system
    (Array          "Array")
    (Character      "Character")
    (CharacterTable "CharacterTable")
    (Cons           "Cons")
    (Dictionary     "Dictionary")
    (IFixed         "IFixed")
    (InputFile      "InputFile")
    (OutputFile     "OutputFile")
    (SmallInteger   "SmallInteger")
    (String         "String")
    (Symbol         "Symbol")
    (UndefinedObject "UndefinedObject")
    (charactertable "charactertable")
    (stdinstream    "stdinstream")
    (stdoutstream   "stdoutstream")
    (_symbols_      "_symbols_")
    ; Built-in classes related to evaluation
    (Assign        "Assign")
    (Call          "Call")
    (Capture       "Capture")
    (Const         "Const")
    (Env           "Env")
    (List          "List")
    (Scoped        "Scoped")
    (Var           "Var")
    ))

(define-syntax-rule (transform-code code ...)
  (let ((transformed (car (transform-expression `(lambda () code ...) natives)))
        (idx 0))
    (string-append 
        "array_object __symbols__ = make_array(" (number->string (* (length symbols) 2)) ");\n"
        "object _symbols_ = (object)make_constant((object)__symbols__);\n"
        transformed
        (apply string-append (map (lambda (p) 
                 (let ((r (string-append 
                               "array_at_put(__symbols__, "
                                (number->string idx) ", " (cadr p) ");\n")))
                   (set! idx (+ idx 1))
                   r))
               symbols)))))
