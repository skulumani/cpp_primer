PRODUCT := out

CXX := g++
LINKER := g++
INCDIRS := -I.
CXXFLAGS := -std=c++11 -Wall -Wextra
SRCFILES := $(wildcard *.cpp)
OBJFILES := $(patsubst %.cpp, %.o, $(SRCFILES))
DEPFILES := $(patsubst %.cpp,%.d, $(SRCFILES))

all: ex2-4


ex2-4: ex2-4.cpp
	$(CXX) ex2-4.cpp $(INCDIRS) $(CXXFLAGS) -o ex2-4

clean: 
	rm -f *.o *.d
