bin_PROGRAMS=pinocchio
EXTRA_PROGRAMS=test
SOURCES=model.c bootstrap.c primitives.c system.c print.c debug.c\
thread.c model.h bootstrap.h primitives.h system.h print.h gc.h debug.h\
thread.h constants.h\
scheme/behaviour.c scheme/behaviour.h scheme/natives.c scheme/natives.h\
scheme/symbols.c scheme/symbols.h\
system/ast/iassign.c system/ast/icall.h system/ast/iassign.h\
system/ast/icapture.h system/ast/ivar.h system/ast/icapture.c\
system/ast/ilist.c system/ast/icall.c system/ast/ivar.c\
system/ast/ilist.h system/ast/iconst.h system/ast/iscoped.h\
system/ast/iconst.c system/ast/iscoped.c\
system/io/file.h system/io/file.c\
system/runtime/env.c system/runtime/env.h\
system/type/dict.c system/type/smallint.c system/type/string.h system/type/dict.h\
system/type/smallint.h system/type/array.c system/type/array.h system/type/char.c\
system/type/string.c system/type/char.h system/type/ifixed.c system/type/ifixed.h\
system/tool/ival.c system/tool/shift.h system/tool/ival.h system/tool/fallback.c\
system/tool/fallback.h system/tool/shift.c

pinocchio_SOURCES=$(SOURCES) pinocchio.c
test_SOURCES=$(SOURCES) test.c

EXTRA_DIST=pcompiler.scm boot/core.p boot/peg.p\
boot/test/test-core.p boot/test/test-peg.p prefix.c postfix.c\
boot/smalltalk.p boot/test/test-smalltalk.p

CLEANFILES=pinocchio.c test

pinocchio.c: $(EXTRA_DIST)
	cat prefix.c > $@
	$(MZSCHEME) -r boot/pinocchio.scm >> $@
	cat postfix.c >> $@
