TARGET=pinocchio

CFILES=$(wildcard *.c \
            system/*c \
            system/ast/*.c \
            system/type/*.c \
            system/runtime/*.c)

HFILES=$(CFILES:%.c=%.h)

CFLAGS+=-I. -O3 -lgc -Wall
LDFLAGS+=-lgc

SOURCES=$(CFILES) $(HFILES)
OBJECTS=$(CFILES:%.c=%.o)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(OBJECTS) $(TARGET) make.depend

profile:
	LDFLAGS="-pg" CFLAGS="-pg" make $(TARGET)
	./$(TARGET)
	gprof --flat-profile $(TARGET)

include make.depend

make.depend: $(SOURCES)
	$(CC) -M -I. $(CFILES) > $@
	#makedepend $(INCLUDES) $^

