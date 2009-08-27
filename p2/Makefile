TARGET=pinocchio

CFILES=$(TARGET).c
HFILES=$(TARGET).h

CFLAGS=-I. -O3 -lgc
LDFLAGS=-lgc

SOURCES=$(CFILES) $(HFILES)
OBJECTS=$(SOURCES:%.c=%.o)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -rf $(OBJECTS) $(TARGET)
