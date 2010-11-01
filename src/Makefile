SHELL        = /bin/bash
PHAROVERSION = `cat lib/VERSION`
GITVERSION   = `cat GITVERSION`
EDGEVERSION  = git$(GITVERSION)_mc$(PHAROVERSION)
EDGEPV       = pinocchio_$(EDGEVERSION)
OS           = $(shell uname)
# ============================================================================
TARGET       = pinocchio

CFILES      += $(wildcard *.c) $(shell find system -name '*.c')
CFILES      += $(shell find lib -name '*.c')

CIFILES      = $(wildcard *.ci) $(shell find system -name '*.ci')
HIFILES      = $(wildcard *.hi) $(shell find system -name '*.hi')
HFILES      += $(CFILES:%.c=%.h)

SOURCES       = $(CFILES) $(HFILES) $(HIFILES) $(CIFILES)
PLUGINSOURCES = plugin/Makefile $(wildcard plugin/*.h) $(wildcard plugin/*.c) $(wildcard plugin/**/*.h) $(wildcard plugin/**/*.c)
EXTRASOURCES  = SETUP lib/VERSION GITVERSION Makefile $(PLUGINSOURCES)
OBJECTS       = $(CFILES:%.c=%.o)
# ============================================================================
CFLAGS  += -pipe -I. -Wall -std=c99 -DASSERT_FAIL
#CFLAGS  += -DNO_EXCEPTION
#CFLAGS  += -DTHREAD -DNOGC
LDFLAGS += -lgc -lm -ldl
#LDFLAGS += -lpthread
ifeq ($(findstring Darwin,$(OS)),Darwin)
#	CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#	LDFLAGS += -arch i386 -arch x86_64 -arch ppc
	CC	= clang
#	CFLAGS += -O4
else
	CFLAGS += -O3
    LDFLAGS +=  -export-dynamic
endif
# ============================================================================

all: $(TARGET)

%.o: %.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

plugin:
	@cd plugin; make;

clean:
	@rm -rf $(OBJECTS) $(CFILES:%.c=%.gcno) $(CFILES:%.c=%.gcda) $(TARGET) make.depend
	@cd plugin; ${MAKE} clean;

GITVERSION:
	@ruby -e 'print `git branch 2> /dev/null`.chomp[2..-1]' > $@
	@echo -n '_' >> $@
	@git show-ref --hash=20 HEAD >> $@

$(TARGET): $(OBJECTS)
	@echo Linking $@
	$(CC) $(LDFLAGS) -o $@ $^; make plugin


# ============================================================================
profile:
	LDFLAGS+="-pg" CFLAGS+="-pg" make $(TARGET)
	./$(TARGET) benchmark/fib/fib34.p
	gprof --flat-profile $(TARGET)

dict-nn:
	make dict-nonative
	
dict-nonative:
	touch -c 'system/collection/Dictionary.c'
	touch -c 'system/collection/DictBucket.c' 
	touch -c 'system/class/Class.c'
	CFLAGS+="-g -DNO_EXCEPTION -DDEBUG -DPRINT_DISPATCH_TRACE -DDICT_NONATIVE" make $(TARGET)

array-nn:
	make array-nonative
	
array-nonative:
	touch -c 'system/collection/Array.c'
	CFLAGS+="-g -O0 -DNO_EXCEPTION -DDEBUB -DPRINT_DISPATCH_TRACE -DARRAY_NONATIVE" make $(TARGET)
	
array-wrapped:
	touch -c 'system/collection/Array.c'
	CFLAGS+="-g -O0 -DNO_EXCEPTION -DDEBUB -DPRINT_DISPATCH_TRACE -DARRAY_WRAPPED" make $(TARGET)
	

# ============================================================================
probes: probes.d
	dtrace -h -s probes.d
	
probes.o: probes.d
	@if [[ $$(uname) != "Darwin" ]]; then dtrace -G -s probes.d -o probes.o $(OBJECTS); fi

dtrace:
	LDFLAGS+="" CFLAGS+="-03 -DDTRACE" make $(TARGET)

# ============================================================================
debug:
	touch -c 'system/class/Class.c'
	CFLAGS+="-g -O0 -DNO_EXCEPTION -DDEBUG -DPRINT_DISPATCH_TRACE" make $(TARGET) 

gdb:
	CFLAGS+="-O0 -DNO_EXCEPTION -g" make $(TARGET)

# ============================================================================
tags: $(SOURCES)
	if [[ $$(uname) == "Darwin" ]]; then ctags $$(find . -iname "*.ci" -or -iname "*.hi" -or -iname "*.c" -or -iname "*.h"); else ctags -h ".h.hi" --langmap="c:.c.ci" -R .; fi


dist: $(SOURCES) $(EXTRASOURCES)
	@mkdir -p $(EDGEPV)
	@tar cf $(EDGEPV).tar $^
	@mv $(EDGEPV).tar $(EDGEPV)
	@EDGEPV=$(EDGEPV) && cd $${EDGEPV} && tar xf $${EDGEPV}.tar
	@rm $(EDGEPV)/$(EDGEPV).tar
	@tar cfz $(EDGEPV).tar.gz $(EDGEPV)
	@rm -rf $(EDGEPV)

# ============================================================================
.PHONY: test vtest run clean profile plugin dist GITVERSION
# ============================================================================
include make.depend

make.depend: $(SOURCES)
	@gcc -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^
