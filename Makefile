.SUFFIXES : .cpp .o

TARGET = test

SRCS = $(wildcard src/*.cpp)
OBJECTS = $(addprefix obj/, $(notdir $(SRCS:.cpp=.o)))
LIBS =
INCDIR =
CFLAGS =

CXX = g++

$(TARGET): $(OBJECTS) 
	$(CXX) -o $(TARGET) $(OBJECTS)

obj/%.o: src/%.cpp
	$(CXX) -c -o $@ $<

run:
	@$(MAKE) && ./$(TARGET) $(ARGS)
clean:
	rm -f $(OBJECTS) $(TARGET)
