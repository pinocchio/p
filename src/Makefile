SHELL        = /bin/bash
PHAROVERSION = `cat lib/VERSION`
GITVERSION   = `cat GITVERSION`
EDGEVERSION  = git$(GITVERSION)_mc$(PHAROVERSION)
EDGEPV       = pinocchio_$(EDGEVERSION)
OS           = $(shell uname)

# ============================================================================

TARGET       = pinocchio

CFILES      += $(shell find . -name '*.c' -not -path "./plugin*" -not -path "./tests*")
HFILES      += $(T_CFILES:%.c=%.h)

SOURCES      = $(CFILES) $(HFILES)

PLUGINCFILES = $(shell find plugin -name "*.c")
PLUGINHFILES = $(PLUGINCFILES:%.c=%.h)
PLUGINSOURCES = plugin/Makefile $(PLUGINCFILES) $(PLUGINHFILES)
EXTRASOURCES  = SETUP lib/VERSION GITVERSION Makefile $(PLUGINSOURCES)
OBJECTS       = $(CFILES:%.c=%.o)

EXTRAOBJECTS  = $(shell find lib -name '*.o')

# ============================================================================

CFLAGS   += -g -pipe -I. -Wall -std=c99 -DASSERT_FAIL
#CFLAGS  += -DNO_EXCEPTION
#CFLAGS  += -DTHREAD -DNOGC
LDFLAGS  += -lgc -lm -ldl -lcmockery
#LDFLAGS += -lpthread
CC        = gcc-4.5 
ifeq ($(findstring Darwin,$(OS)),Darwin)
#	CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#	LDFLAGS += -arch i386 -arch x86_64 -arch ppc
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

$(TARGET): $(OBJECTS) $(EXTRAOBJECTS)
	@echo Linking ${CC} ${LDFLAGS} $@
	@$(CC) $(LDFLAGS) -o $@ $^; make plugin

run: $(TARGET)
	rlwrap --file=completion.txt ./$(TARGET)

plugin:
	@cd plugin; make;

tests:
	CFLAGS+="-D UNIT_TESTING" $(MAKE) && ./$(TARGET)

clean:
	@rm -rf $(OBJECTS) $(CFILES:%.c=%.gcno) $(CFILES:%.c=%.gcda) $(TARGET) $(TARGET) make.depend
	@cd plugin; ${MAKE} clean;

fast:
	CFLAGS+="-O3" LDFLAGS+="-O3" make

fast-profiled:
	CFLAGS+="-O3 -fprofile-generate" LDFLAGS+="-fprofile-generate" make $(TARGET)
	./$(TARGET) benchmark/fib/fib.p
	make clean
	CFLAGS+="-O3 -fprofile-use" LDFLAGS+="-fprofile-use" make $(TARGET)

llvm:
	CC=llvm-gcc LDFLAGS+="-O0" CFLAGS+="-O0 -DLLVM" make $(TARGET)

llvm-fast:
	CC=llvm-gcc LDFLAGS+="-O4" CFLAGS+="-O4 -DLLVM" make $(TARGET)
	
clang-fast:
	CC=llvm-gcc LDFLAGS+="-O4" CFLAGS+="-O4" make $(TARGET)

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
	touch -c 'system/class/Class.c'
	CFLAGS+="-g -O0 -DNO_EXCEPTION -DDEBUG -DPRINT_DISPATCH_TRACE" make $(TARGET) 

gdb:
	CFLAGS+="-DNO_EXCEPTION -g" make $(TARGET)

tags: $(SOURCES)
	if [[ $$(uname) == "Darwin" ]]; then ctags $$(find . -iname "*.ci" -or -iname "*.hi" -or -iname "*.c" -or -iname "*.h"); else ctags -h ".h.hi" --langmap="c:.c.ci" -R .; fi;
	ctags -R -n -f cppcomplete.tags --fields=+ai --C++-types=+p * 

dist: $(SOURCES) $(EXTRASOURCES)
	@mkdir -p $(EDGEPV)
	@tar cf $(EDGEPV).tar $^
	@mv $(EDGEPV).tar $(EDGEPV)
	@EDGEPV=$(EDGEPV) && cd $${EDGEPV} && tar xf $${EDGEPV}.tar
	@rm $(EDGEPV)/$(EDGEPV).tar
	@tar cfz $(EDGEPV).tar.gz $(EDGEPV)
	@rm -rf $(EDGEPV)

# ============================================================================
.PHONY: tests vtest run clean profile plugin dist GITVERSION
# ============================================================================
include make.depend

make.depend: $(SOURCES)
	@gcc -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^
