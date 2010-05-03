SHELL     = /bin/bash

MAKEOPTS  = -j3

CFILES    = $(wildcard */*.c)
OFILES    = $(CFILES:%.c=%.o)
SOFILES   = $(filter-out %Helper.c,$(CFILES:%.c=%.so))
LOFILES   = $(CFILES:%.c=%.lo)

ifeq (,$(findstring Darwin,$$(uname)))
    CFLAGS   += -DASSERT_FAIL -fno-common -DPIC -c -I../ -Wall
    LDFLAGS  += -lm -lgc -dynamiclib -undefined dynamic_lookup
else
    CFLAGS  += -DASSERT_FAIL -fPIC -c -I../ -Wall
    LDFLAGS += -lm -lgc
endif

plugin: $(SOFILES)

%.o: %.c
	@echo Compiling: $@
	$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

%.so: %.o
	@$(CC) $(LDFLAGS) -o $@ $^  

clean:
	echo $(SOFILES) 
	@rm -rf $(OFILES) $(SOFILES) $(LOFILES) make.depend

tags: $(SOURCES)
	@cd ..; make tags

mac:
	CFLAGS="-arch i386 -arch x86_64 -arch ppc" LDFLAGS="-arch i386 -arch x86_64 -arch ppc" make

.PHONY: plugin tags clean tags
