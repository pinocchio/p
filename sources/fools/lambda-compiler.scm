(define var-id 0)

(define (make-var-name type name)
  (set! var-id (+ var-id 1))
  (string-append type
                 "_"
                 (number->string var-id)
                 "_"
                 (symbol->string name)))

(define (make-vars arg)
  (let ((var-name (make-var-name "ivar" arg)))
    (list arg var-name (string-append "ivar_object "
                                      var-name
                                      " = make_ivar((object)fools_system->nil, 0);\n"))))


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
                               "array_at_put(" name ", " (number->string idx) ", " (cadr (car todo)) ");\n"))))))
      
(define (transform-lambda a-lambda outervars)
  (let* ((args (cadr a-lambda))
         (body (cddr a-lambda))
         (name (make-var-name "lambda" 'x))
         (vars (map make-vars args))
         (transformed (transform-expression-list body (append outervars vars)))
         (argarray (make-arguments vars name)))
    (list (string-append
           (apply string-append (map caddr vars))
           (car transformed)
           (car argarray)
           "object " name " = make_func(" (cadr argarray) ", (object)(instruction)" (cadr transformed) ");\n")
          name)))

(define (transform-expression-list expressions vars)
  (let* ((size (length expressions))
         (name (make-var-name "ilist" 'lambda))
         (code (string-append
                "ilist_object "
                name
                " = make_ilist("
                (number->string size)
                ");\n")))
    (let loop ((todo expressions)
               (idx 0)
               (prefix "")
               (code code))
      (if (null? todo)
          (list (string-append prefix code) name)
          (apply (lambda (pre c)
                   (loop (cdr todo)
                         (+ idx 1)
                         (string-append prefix pre)
                         (string-append code
                                        "ilist_at_put(" name ", " (number->string idx) ", " c ");\n")))
                 (transform-expression (car todo) vars))))))

(define (transform-set! expression vars)
  (unless (= (length expression) 3)
    (error "Unknown format for set!" expression))
  (let ((name (make-var-name "iassign" 'x))
        (names (transform-expression (cadr expression) vars))
        (body (transform-expression (caddr expression) vars)))
    (list (string-append
           (car names)
           (car body)
           "iassign_object " name " = make_iassign(" (cadr names) ", (object)" (cadr body) ");\n")
          name)))

(define (transform-expression expression vars)
  (cond ((list? expression)
         (case (car expression)
           ((set!) (transform-set! expression vars))
           ((lambda) (transform-lambda expression vars))
           (else (transform-application expression vars))))
        ((number? expression) (transform-number expression vars))
        ((symbol? expression) (transform-symbol expression vars))
        (else (error "Unknown type: " expression))))

(define (transform-number expression vars)
  (let ((name (make-var-name "number" (string->symbol (number->string expression)))))
    (list (string-append "object "
                         name
                         " = (object)(instruction)make_iconst((object)make_number("
                         (number->string expression)
                         "));\n") name)))

(define (transform-symbol expression vars)
  (list "" (cadr (assoc expression vars))))

(define (transform-appcall-arg app name idx)
  (string-append "set_appcarg(" app ", " (number->string idx) ", " name ");\n"))


(define (transform-application expression vars)
  (cond ((eq? 'quote (car expression)) ; maybe unnecessary? :)
         (unless (symbol? (cadr expression))
           (error "Not a symbol!" expresson))
         (let ((result (assoc (cadr expression) vars)))
           (if result
               (list "" (cadr result))
               (error "Unfound binding!" expression))))
        (else 
         (let* ((parts (map (lambda (exp) (transform-expression exp vars)) expression))
                (prefix (apply string-append (map car parts)))
                (appname (cadr (car parts)))
                (name (make-var-name "appcall" (string->symbol appname)))
                
                (code (string-append "appcall_object "
                                     name
                                     " = make_appcall(" appname ", "
                                     (number->string (- (length parts) 1)) ");\n"))
                (args (let loop ((todo (cdr parts))
                                 (idx 0)
                                 (code ""))
                        (if (null? todo)
                            code
                            (loop (cdr todo)
                                  (+ idx 1)
                                  (string-append code (transform-appcall-arg name (cadr (car todo)) idx)))))))
           (list (string-append prefix code args)
                 name)))))


(define natives
  '((+ "scheme_primitive_plus")
    (* "scheme_primitive_times")
    (/ "scheme_primitive_divide")
    (- "scheme_primitive_minus")
    ))

(define (transform-code code)
  (car (transform-expression code natives)))