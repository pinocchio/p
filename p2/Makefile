TARGET=pinocchio

CFILES=$(TARGET).c
HFILES=$(TARGET).h

CFLAGS+=-I. -O3 -lgc -Wall
LDFLAGS+=-lgc

SOURCES=$(CFILES) $(HFILES)
OBJECTS=$(CFILES:%.c=%.o)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

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
	gcc -M -I. $(CFILES) > $@
