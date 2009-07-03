bin_PROGRAMS=pinocchio
EXTRA_PROGRAMS=test
SOURCES=model.c bootstrap.c primitives.c system.c print.c debug.c\
thread.c model.h bootstrap.h primitives.h system.h print.h gc.h debug.h\
thread.h constants.h\
scheme/behaviour.c scheme/behaviour.h scheme/natives.c scheme/natives.h\
scheme/symbols.c scheme/symbols.h\
system/array.c system/array.h system/char.c system/char.h system/dict.c\
system/dict.h system/env.c system/env.h system/fallback.c system/fallback.h\
system/file.c system/file.h system/iassign.c system/iassign.h system/icall.c\
system/icall.h system/icapture.c system/icapture.h system/iconst.c\
system/iconst.h system/ifixed.c system/ifixed.h system/ilist.c system/ilist.h\
system/iscoped.c system/iscoped.h system/ival.c system/ival.h system/ivar.c\
system/ivar.h system/number.c system/number.h system/shift.c system/shift.h\
system/string.c system/string.h
pinocchio_SOURCES=$(SOURCES) pinocchio.c
test_SOURCES=$(SOURCES) test.c

EXTRA_DIST=pcompiler.scm boot/core.p boot/peg.p\
boot/test/test-core.p boot/test/test-peg.p

pinocchio.c: $(EXTRA_DIST) prefix.c postfix.c
	cat prefix.c > $@
	$(MZSCHEME) -r boot/pinocchio.scm >> $@
	cat postfix.c >> $@
