TARGET=pinocchio

CFILES=$(TARGET).c
HFILES=$(TARGET).h

CFLAGS+=-I. -O3 -lgc
LDFLAGS+=-lgc

SOURCES=$(CFILES) $(HFILES)
OBJECTS=$(CFILES:%.c=%.o)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -rf $(OBJECTS) $(TARGET)

profile:
	LDFLAGS="-pg" CFLAGS="-pg" make $(TARGET)
