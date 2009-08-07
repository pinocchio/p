(include "syntaxc.scm")

; Load the native declarations
(map
    (lambda (native-decl)
        (apply native (cons 'bind native-decl)))
    (load "compiler/natives.scm"))

; Load the input files
(let ((args (current-command-line-arguments))
      (compiler (new-compiler)))
    (apply compiler (cons 'load (vector->list args))))
