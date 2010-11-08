
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
CFLAGS  += -pipe -I. -Wall -std=c99 
#CFLAGS  += -DNO_EXCEPTION
#CFLAGS  += -DTHREAD -DNOGC
LDFLAGS += -lgc -lm -ldl
#LDFLAGS += -lpthread
ifeq ($(findstring Darwin,$(OS)),Darwin)
#	CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#	LDFLAGS += -arch i386 -arch x86_64 -arch ppc
	CC	= llvm-gcc
	CFLAGS += -O3
	LDFLAGS += --export-dynamic
else
	CFLAGS += -O3
    LDFLAGS += -export-dynamic
endif
# ============================================================================

all: $(TARGET)

%.o: %.c
	@echo Compiling: $@
	$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

$(TARGET): $(OBJECTS)
	@echo Linking $@
	@$(CC) $(LDFLAGS) -o $@ $^; make plugin
	
plugin:
	@cd plugin; make;

clean:
	@rm -rf $(OBJECTS) $(CFILES:%.c=%.gcno) $(CFILES:%.c=%.gcda) $(TARGET) make.depend
	@cd plugin; ${MAKE} clean;

GITVERSION:
	@ruby -e 'print `git branch 2> /dev/null`.chomp[2..-1]' > $@
	@echo -n '_' >> $@
	@git show-ref --hash=20 HEAD >> $@



# ============================================================================
profile:
	LDFLAGS+="-pg" CFLAGS+="-pg" make $(TARGET)
	./$(TARGET) benchmark/fib/fib34.p
	gprof --flat-profile $(TARGET)

# ============================================================================

touch-benchmark-files:
	touch -c 'system/class/Class.c'
	touch -c 'system/collection/Dictionary.c'
	touch -c 'system/collection/DictBucket.c' 
	touch -c 'system/collection/Array.c'
	touch -c 'system/runtime/InlineCache.c'
	touch -c 'system/interpretation/Threaded.c'
	touch -c 'system/number/SmallInt.c'
	touch -c 'system/string/Character.c'


dict-nn:
	make dict-nonative
	
dict-nonative:
	make clean
	CFLAGS+="-DDICT_NONATIVE" make $(TARGET)


array-nn:
	make array-nonative
	
array-nonative:
	make clean
	CFLAGS+="-DARRAY_NONATIVE" make $(TARGET)
	
	
array-wrapped:
	make clean
	CFLAGS+="-DARRAY_WRAPPED" make $(TARGET)
	
array-wrapped-no-int-cache:
	make clean
	CFLAGS+="-DARRAY_WRAPPED -DNO_SMALLINT_CACHE" make $(TARGET)
	
no-ic:
	make no-inline-cache
	
no-inline-cache:
	make clean
	CFLAGS+="-DNO_IC" make $(TARGET)
	
no-pic:
	make no-polymorphic-inline-cache
	
no-polymorphic-inline-cache:
	make clean
	CFLAGS+="-DNO_PIC" make $(TARGET)
	
	
no-int-cache:
	make clean
	CFLAGS+="-DNO_SMALLINT_CACHE" make $(TARGET)

no-char-cache:
	make clean
	CFLAGS+="-DNO_CHAR_CACHE" make $(TARGET)
	
# ============================================================================

benchmarks:
	@make clean >> /dev/null;
	@echo "" >> benchmark_results.txt
	@date    >> benchmark_results.txt
	
	make benchmark;
	make benchmark-no-char-cache;
	make benchmark-no-int-cache;
	make benchmark-no-pic;
	make benchmark-no-ic;
	make benchmark-array-wrapped;
	make benchmark-array-wrapped-no-int-cache;
	make benchmark-array-nonative;
	make benchmark-dict-nonative;
	
	reset

benchmark:
	@echo 'STANDARD PINOCCHIO/ =======================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make -j3  >> /dev/null;
	@make run-benchmarks
	
benchmark-no-char-cache:
	@echo 'NO CHARACTER CACHE ========================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make no-char-cache >> /dev/null;
	@make run-benchmarks

benchmark-no-int-cache:
	@echo 'NO INTEGER CACHE ==========================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make no-int-cache >> /dev/null;
	@make run-benchmarks
	
benchmark-no-pic:
	@echo 'NO POLYMORPHIC INLINE CACHE ===============================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make no-pic >> /dev/null;
	@make run-benchmarks
	
benchmark-no-ic:
	@echo 'NO INLINE CACHE ===========================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make no-pic >> /dev/null;
	@make run-benchmarks
	
benchmark-array-wrapped:
	@echo 'ARRAYED WITH WRAPPED INTS =================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make array-wrapped >> /dev/null;
	@make run-benchmarks
	
benchmark-array-wrapped-no-int-cache:
	@echo 'ARRAYED WITH WRAPPED INTS AND NO SMALLINT CACHE ===========' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make array-wrapped-no-int-cache >> /dev/null;
	@make run-benchmarks

benchmark-array-nonative:
	@echo 'NO ARRAY NATIVES ==========================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make array-nonative >> /dev/null;
	@make run-benchmarks
	
benchmark-dict-nonative:
	@echo 'NO DICT NATIVES ===========================================' | tee -a benchmark_results.txt
	@date >> benchmark_results.txt
	@make dict-nonative >> /dev/null;
	@make run-benchmarks
	
run-benchmarks:
	@./pinocchio benchmark/evalution/fib.p    | tee -a benchmark_results.txt
	@./pinocchio benchmark/evalution/parser.p | tee -a benchmark_results.txt
	@./pinocchio benchmark/evalution/dict.p   | tee -a benchmark_results.txt

# ============================================================================
probes: probes.d
	dtrace -h -s probes.d
	
probes.o: probes.d
	@if [[ $$(uname) != "Darwin" ]]; then dtrace -G -s probes.d -o probes.o $(OBJECTS); fi

dtrace:
	make touch-benchmark-files
	LDFLAGS+="" CFLAGS+="-03 -DDTRACE" make $(TARGET)

dtrace-no-pic:
	make touch-benchmark-files
	LDFLAGS+="" CFLAGS+="-03 -DDTRACE -DNO_PIC" make $(TARGET)


# ============================================================================
debug:
	touch -c 'system/class/Class.c'
	CFLAGS+="-g -O0 -DNO_IC -DNO_EXCEPTION -DDEBUG -DPRINT_DISPATCH_TRACE" make $(TARGET) 

debug-silent:
	touch -c 'system/class/Class.c'
	CFLAGS+="-g -O0 -DNO_IC -DNO_EXCEPTION -DDEBUG" make $(TARGET) 

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
.PHONY: test vtest run clean profile plugin dist GITVERSION benchmark benchmark-dict-nonative benchmark-array-nonative benchmark-array-wrapped benchmark-no-char-cache benchmark-no-int-cache benchmark-no-pic benchmark-no-ic
# ============================================================================
include make.depend

make.depend: $(SOURCES)
	@gcc -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^
