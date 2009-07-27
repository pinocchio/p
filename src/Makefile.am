bin_PROGRAMS=pinocchio
EXTRA_PROGRAMS=test

TYPEGEN=system/type/dictionary.c system/type/dictionary.h system/type/array.c\
system/type/array.h system/type/chr.c system/type/chr.h scheme/symbols.c\
scheme/symbols.h system/type/smallint.c system/type/smallint.h
TYPECODE=boot/type/dict.p boot/type/array.p boot/type/char.p\
boot/type/smallint.p

SOURCES=$(TYPEGEN) model.c bootstrap.c\
system.c print.c debug.c thread.c model.h bootstrap.h system.h print.h gc.h debug.h\
thread.h constants.h\
scheme/behaviour.c scheme/behaviour.h scheme/natives.c scheme/natives.h\
system/ast/assign.c system/ast/call.h system/ast/assign.h\
system/ast/capture.h system/ast/var.h system/ast/capture.c\
system/ast/list.c system/ast/call.c system/ast/var.c\
system/ast/list.h system/ast/const.h system/ast/scoped.h\
system/ast/const.c system/ast/scoped.c\
system/io/stream.h system/io/stream.c system/io/file.h system/io/file.c\
system/runtime/env.c system/runtime/env.h\
system/type/type.h\
system/type/string.h\
system/type/string.c system/type/ifixed.c system/type/ifixed.h\
system/type/symbol.c system/type/symbol.h\
system/tool/ival.c system/tool/shift.h system/tool/ival.h system/tool/fallback.c\
system/tool/fallback.h system/tool/shift.c

pinocchio_SOURCES=$(SOURCES) pinocchio.c
test_SOURCES=$(SOURCES) test.c

EXTRA_DIST=pcompiler.scm boot/core.p boot/scheme.p boot/peg.p\
boot/test/test-core.p boot/test/test-peg.p prefix.c postfix.c\
boot/smalltalk.p boot/test/test-smalltalk.p boot/test/test-scheme.p\
boot/test/test-ast.p boot/type/dict.p symgen.scm pprocessor.scm

GENERATED=pinocchio.c $(TYPEGEN)

CLEANFILES=test $(GENERATED)

pinocchio.c: $(EXTRA_DIST)
	cat prefix.c > $@
	$(MZSCHEME) -r boot/pinocchio.scm >> $@
	cat postfix.c >> $@

$(TYPEGEN): $(TYPECODE)
	$(MZSCHEME) -r symgen.scm
	$(MZSCHEME) -r pprocessor.scm $^
