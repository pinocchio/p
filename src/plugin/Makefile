SHELL     = /bin/bash

MAKEOPTS  = -j3
OS        = $(shell uname)
CC        = gcc
# ============================================================================
CFILES    = $(wildcard */*.c) $(wildcard */*/*.c)
OFILES    = $(CFILES:%.c=%.o)
SOFILES   = $(filter-out %Helper.c,$(CFILES:%.c=%.so))
LOFILES   = $(CFILES:%.c=%.lo)
# ============================================================================
CFLAGS  += -O3 -DASSERT_FAIL -c -I../ -Wall
LDFLAGS += -lm -lgc 
ifeq ($(findstring Darwin,$(OS)),Darwin)
    CFLAGS  += -fno-common -DPIC 
    LDFLAGS += -dynamiclib -undefined dynamic_lookup
#	CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#	LDFLAGS += -arch i386 -arch x86_64 -arch ppc
else
    CFLAGS  += -fPIC
    LDFLAGS += -shared
endif
# ============================================================================
plugin: $(SOFILES)

%.o: %.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

%.so: %.o
	@$(CC) $(LDFLAGS) -o $@ $^  

clean:
	@echo rm $(SOFILES) 
	@rm -rf $(OFILES) $(SOFILES) $(LOFILES) make.depend

tags: $(SOURCES)
	@cd ..; make tags
# ============================================================================
.PHONY: plugin tags clean tags
