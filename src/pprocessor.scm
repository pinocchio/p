(require (lib "mzlib/string"))
(load "pcompiler.scm")

(define (fname type name)
    (string-append "gen_" type "_" (string->code (symbol->string name))))

(define (transform-c-method method type)
  (define (transform name args body)
    (let ((f-name (fname type name))
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
    (string-uppercase! package)
    (let ((tr-inst (map (lambda (el) (transform-c-method el sname)) f-inst))
          (tr-class (map (lambda (el) (transform-c-method el sname)) f-class))
          (hof (build-path location (string-append sname ".h")))
          (cof (build-path location (string-append sname ".c"))))
      (let ((header `(("#ifndef SYSTEM_" ,package "_" ,hname "_H")
                      ("#define SYSTEM_" ,package "_" ,hname "_H")
                       ""
                       ("extern void " ,sname "_dispatch();")
                       ("extern void " ,sname "_stub_dispatch();")
                       ("extern void " ,sname "_class_dispatch();")
                       ("extern void " ,sname "_class_stub_dispatch();")
                       ""
                       ,@(map (lambda (h) `("extern " ,(car h) ";")) f-helper)
                       ""
                       ,@(map (lambda (m)
                            (string-append "extern void "
                                            (fname sname (car m)) "_do();"))
                            f-inst)
                       ""
                       ("struct " ,sname " {")
                       ,@(map (lambda (l)
                            `("\t" ,@(if (string? (cadr l))
                                         (list (cadr l) " ")
                                         (list (cadr l) "_object "))
                                   ,(car l) ";")) layout)
                       "};"
                       ""
                       ("#endif // SYSTEM_" ,package "_" ,hname "_H")
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
  
