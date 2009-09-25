TARGET=pinocchio
TEST=pinnocchio_test

TCFILES=$(wildcard *.c) $(wildcard system/*/*.c)
#CFILES=pinocchio.c

TEST_CFILES=$(filter %Test.c,$(TCFILES))
CFILES=$(filter-out %Test.c,$(TCFILES))

HFILES=$(CFILES:%.c=%.h)

CFLAGS+=-I. -O3 -lgc -Wall
LDFLAGS+=-lgc

SOURCES=$(CFILES) $(HFILES)
OBJECTS=$(CFILES:%.c=%.o)


$(TARGET): $(OBJECTS)
	echo "$(CFILES)"
	# $(CC) $(LDFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)


test:
	TARGET=$(TEST) make $(TEST) 
	./$(TEST)


clean:
	rm -rf $(OBJECTS) $(TARGET) make.depend


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

