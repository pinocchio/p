SHELL        = /bin/bash
PHAROVERSION = `cat lib/VERSION`
GITVERSION   = `cat GITVERSION`
EDGEVERSION  = git$(GITVERSION)_mc$(PHAROVERSION)
EDGEPV       = pinocchio_$(EDGEVERSION)
MAKEOPTS     = -j3
OS           = $(shell uname)
# ============================================================================
TARGET       = pinocchio

CFILES      += $(wildcard *.c) $(wildcard system/**/*.c)
CFILES      += $(wildcard lib/**/*.c) $(wildcard lib/*.c)

CIFILES      = $(wildcard *.ci) $(wildcard system/**/*.ci)
HIFILES      = $(wildcard *.hi) $(wildcard system/**/*.hi)
HFILES      += $(CFILES:%.c=%.h)

SOURCES       = $(CFILES) $(HFILES) $(HIFILES) $(CIFILES)
PLUGINSOURCES = plugin/Makefile $(wildcard plugin/*.h) $(wildcard plugin/*.c) $(wildcard plugin/**/*.h) $(wildcard plugin/**/*.c)
EXTRASOURCES  = SETUP lib/VERSION GITVERSION Makefile $(PLUGINSOURCES)
OBJECTS       = $(CFILES:%.c=%.o)
# ============================================================================
CFLAGS  += -pipe -I. -Wall -g -std=c99 -DASSERT_FAIL 
#CFLAGS  += -DNO_EXCEPTION
#CFLAGS  += -DTHREAD -DNOGC
LDFLAGS += -lgc -lm -ldl
#LDFLAGS += -lpthread
ifeq ($(findstring Darwin,$(OS)),Darwin)
#	CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#	LDFLAGS += -arch i386 -arch x86_64 -arch ppc
	CC	= clang
else
    LDFLAGS +=  -export-dynamic
endif
# ============================================================================

all: $(TARGET)

%.o: %.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

GITVERSION:
	@ruby -e 'print `git branch 2> /dev/null`.chomp[2..-1]' > $@
	@echo -n '_' >> $@
	@git show-ref --hash=20 HEAD >> $@

$(TARGET): $(OBJECTS)
	@echo Linking $@
	@$(CC) $(LDFLAGS) -o $@ $^; make plugin

run: $(TARGET)
	rlwrap --file=completion.txt ./$(TARGET)

plugin:
	@cd plugin; make;

clean:
	@rm -rf $(OBJECTS) $(CFILES:%.c=%.gcno) $(CFILES:%.c=%.gcda) $(TARGET) make.depend
	@cd plugin; ${MAKE} clean;

fast:
	CFLAGS+="-O3" make $(TARGET)

fast-profiled:
	CFLAGS+="-O3 -fprofile-generate" LDFLAGS+="-fprofile-generate" make $(TARGET)
	./$(TARGET) benchmark/fib/fib.p
	make clean
	CFLAGS+="-O3 -fprofile-use" LDFLAGS+="-fprofile-use" make $(TARGET)

llvm:
	CC=llvm-gcc LDFLAGS+="-O0" CFLAGS+="-O0 -DLLVM" make $(TARGET)

llvm-fast:
	CC=llvm-gcc LDFLAGS+="-O4" CFLAGS+="-O4 -DLLVM" make $(TARGET)

clang:
	CC=clang CFLAGS+="-O0 -g -fdiagnostics-show-option -DLLVM" make $(TARGET)

profile:
	LDFLAGS+="-pg" CFLAGS+="-pg" make $(TARGET)
	./$(TARGET) benchmark/fib/fib34.p
	gprof --flat-profile $(TARGET)

fib:
	@make fast
	@benchmark/time.rb 40 ./pinocchio benchmark/fib/fib.p

probes: probes.d
	dtrace -h -s probes.d
	
probes.o: probes.d
	@if [[ $$(uname) != "Darwin" ]]; then dtrace -G -s probes.d -o probes.o $(OBJECTS); fi

dtrace:
	LDFLAGS+="" CFLAGS+="-03 -DDTRACE" make $(TARGET)

debug:
	CFLAGS+="-O0 -DDEBUG -DPRINT_DISPATCH_TRACE" make $(TARGET) 

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
