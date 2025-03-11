TARGET = sum-nbo
CXXFLAGS = -g -Wall

all: $(TARGET)

$(TARGET): sum-nbo.o
	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm -f $(TARGET) *.o

