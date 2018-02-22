PRODUCT := out

CXX := g++
LINKER := g++
INCDIRS := -I.
CXXFLAGS := -std=c++11 -Wall -Wextra
SRCFILES := $(wildcard *.cpp)
OBJFILES := $(patsubst %.cpp, %.o, $(SRCFILES))
DEPFILES := $(patsubst %.cpp,%.d, $(SRCFILES))

all: bookstore ex1-2 while ex1-9

bookstore: bookstore.cpp
	$(CXX) bookstore.cpp $(INCDIRS) $(CXXFLAGS) -o bookstore

ex1-2: ex1-2.cpp
	$(CXX) ex1-2.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-2

while: while.cpp
	$(CXX) while.cpp $(INCDIRS) $(CXXFLAGS) -o while

ex1-9: ex1-9.cpp
	$(CXX) ex1-9.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-9
	
clean: 
	rm -f *.o *.d
