(require (lib "mzlib/string"))
(load "pcompiler.scm")

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

(define (transform-c-method method type)
  (define (transform name args body)
    (let ((f-name (string-append type "_" (string->code (symbol->string name))))
          (symbol (cadr (assoc name symbols))))
      (string-lowercase! f-name)
      `(,f-name
        ,symbol
        (("with_pre_eval" ,(length args) "(" ,f-name ", context, " ,@(map (lambda (el) `(,el ", ")) args))
         ,body
         ")"))))
  (apply transform method))

(define (transform-bootstrapping-type name package layout f-inst f-class f-helper)
  (let* ((sname (symbol->string name))
         (hname (symbol->string name))
         (package (symbol->string package))
         (location (build-path "system" package)))
    (string-uppercase! hname)
    (string-lowercase! sname)
    (let ((tr-inst (map (lambda (el) (transform-c-method el sname)) f-inst))
          (tr-class (map (lambda (el) (transform-c-method el sname)) f-class))
          (hof (build-path location (string-append sname ".h")))
          (cof (build-path location (string-append sname ".c"))))
      (let ((header `(("#ifndef SYSTEM_" ,hname "_H")
                      ("#define SYSTEM_" ,hname "_H")
                      "#include <system/type/type.h>"
                      ""
                      ("export_type(" ,sname ");")
                      ""
                      ,@(map (lambda (h) `("extern " ,(car h) ";")) f-helper)
                      ""
                      ("struct " ,sname " {")
                      ,@(map (lambda (l) `("\t" ,(cadr l) "_object " ,(car l) ";")) layout)
                      "};"
                      ""
                      ("#endif // SYSTEM_" ,hname "_H")
                      ))
            (body `("#include <system.h>"
                    "#include <thread.h>"
                    "#include <print.h>"
                    ""
                    ,@(map (lambda (h) `(,(car h) " {" ,(cadr h) "}\n")) f-helper)
                    ,@(map caddr tr-inst)
                    ,@(map caddr tr-class)
                    ""
                    ("define_bootstrapping_type(" ,sname ",")
                    "    // instance"
                    ,@(map (lambda (tr) `("    if_selector(" ,(cadr tr) ", " ,(car tr) ");")) tr-inst)
                    ","
                    "    // class"
                    ,@(map (lambda (tr) `("    if_selector(" ,(cadr tr) ", " ,(car tr) ");")) tr-class)
                    ")"
                    )))
        (when (file-exists? hof)
          (delete-file hof))
        (when (file-exists? cof)
          (delete-file cof))
        (let ((ho (open-output-file hof))
              (co (open-output-file cof)))
          (display (list->code header) ho)
          (close-output-port ho)
          (display (list->code body) co)
          (close-output-port co))))))

(let ((args (current-command-line-arguments)))
  (map (lambda (file)
         (apply transform-bootstrapping-type (cdr (read (open-input-file file)))))
       (vector->list args)))
  