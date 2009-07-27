(include "pcompiler.scm")

(let ((hf `("#ifndef SCHEME_SYMBOLS_H"
            "#define SCHEME_SYMBOLS_H"
            ""
            ,@(map (lambda (o) `("extern object " ,(cadr o) ";")) symbols)

            ""
            "#define define_symbol(name, value)\\"
            "   if (name.pointer == null) {\\"
            "       name = (object)make_symbol(value);\\"
            "   }"
            ""
            "extern void bootstrap_symbols();"
            ""
            "#endif // SCHEME_SYMBOLS_H"))
     (cf `("#include <system.h>"
           "#include <scheme/symbols.h>"
           ""
           ,@(map (lambda (o) `("object " ,(cadr o) ";")) symbols)
           ""
           "void bootstrap_symbols() {"
           ,@(map (lambda (o) `("    define_symbol(" ,(cadr o)
                                               ", L\"" ,(car o) "\");"))
                   symbols)
           "}"))
     (cp (build-path "scheme" "symbols.c"))
     (hp (build-path "scheme" "symbols.h")))
    (when (file-exists? cp)
        (delete-file cp))
    (when (file-exists? hp)
        (delete-file hp))

    (let ((cop (open-output-file cp))
          (hop (open-output-file hp)))
        (display (list->code hf) hop)
        (close-output-port hop)
        (display (list->code cf) cop)
        (close-output-port cop)))
