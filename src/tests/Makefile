SHELL     = /bin/bash

OS        = $(shell uname)
CC        = clang
# ============================================================================
CFILES    = $(shell find .. -name '*.c' -not -path "./plugin*")
OFILES    = $(filter-out ../pinocchio.o,$(CFILES:%.c=%.o))
TARGET    = pinocchio_t
# ============================================================================

CFLAGS  += -g -pipe -I. -Wall -std=c99 -DASSERT_FAIL 
#CFLAGS  += -DNO_EXCEPTION
#CFLAGS  += -DTHREAD -DNOGC
LDFLAGS += -lgc -lm -ldl
#LDFLAGS += -lpthread
CC      = clang
ifeq ($(findstring Darwin,$(OS)),Darwin)
#       CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#       #       LDFLAGS += -arch i386 -arch x86_64 -arch ppc
else
    LDFLAGS +=  -export-dynamic
endif

# ============================================================================
all: $(TARGET)

%.o: %.c 
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

$(TARGET): $(OFILES)
	@echo Linking $@ $(OFILES)
	@$(CC) $(LDFLAGS) -o $@ $^

clean:
	@rm -rf $(OFILES) make.depend

# ============================================================================
.PHONY: tags clean tags
