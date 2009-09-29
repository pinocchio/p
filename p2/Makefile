TARGET=pinocchio

RAW_CFILES=$(wildcard *.c) $(wildcard system/*/*.c)

TEST_CFILES=$(filter %Test.c,$(RAW_CFILES)) pinocchioTest.c
CFILES=$(filter-out %Test.c,$(RAW_CFILES)) pinocchioTest.c

HFILES=$(CFILES:%.c=%.h)
TEST_HFILES=$(TEST_CFILES:%.c=%.h)

CFLAGS+=-I. -O3 -lgc -Wall
LDFLAGS+=-lgc

SOURCES=$(CFILES) $(HFILES)
Type_ObjectS=$(CFILES:%.c=%.o)


$(TARGET): $(Type_ObjectS)
	$(CC) $(LDFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)

test:
	CFLAGS="-DTEST=1" make run

clean:
	rm -rf $(Type_ObjectS) $(TARGET) make.depend

profile:
	LDFLAGS="-pg" CFLAGS="-pg" make $(TARGET)
	./$(TARGET)
	gprof --flat-profile $(TARGET)

tags: $(SOURCES)
	ctags -R .

include make.depend

make.depend: $(SOURCES)
	$(CC) -M -I. $(CFILES) > $@
	#makedepend $(INCLUDES) $^

