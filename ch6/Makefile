PRODUCT := out

CXX := g++
LINKER := g++
INCDIRS := -I.
CXXFLAGS := -std=c++11 -Wall -Wextra -pedantic
SRCFILES := $(wildcard *.cpp)
OBJFILES := $(patsubst %.cpp, %.o, $(SRCFILES))
DEPFILES := $(patsubst %.cpp,%.d, $(SRCFILES))

all: ex6-10

ex6-10: ex6-10.cpp swap.cpp Chapter6.h
	$(CXX) swap.cpp ex6-10.cpp $(INCDIRS) $(CXXFLAGS) -o ex6-10



clean: 
	rm -f *.o *.d
