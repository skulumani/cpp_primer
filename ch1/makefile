PRODUCT := out

CXX := g++
LINKER := g++
INCDIRS := -I.
CXXFLAGS := -std=c++11 -Wall -Wextra
SRCFILES := $(wildcard *.cpp)
OBJFILES := $(patsubst %.cpp, %.o, $(SRCFILES))
DEPFILES := $(patsubst %.cpp,%.d, $(SRCFILES))

all: bookstore ex1-2 while ex1-9 ex1-10 ex1-11 ex1-16 ex1-17

bookstore: bookstore.cpp
	$(CXX) bookstore.cpp $(INCDIRS) $(CXXFLAGS) -o bookstore

ex1-2: ex1-2.cpp
	$(CXX) ex1-2.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-2

while: while.cpp
	$(CXX) while.cpp $(INCDIRS) $(CXXFLAGS) -o while

ex1-9: ex1-9.cpp
	$(CXX) ex1-9.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-9
	
ex1-10: ex1-10.cpp
	$(CXX) ex1-10.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-10
	
ex1-11: ex1-11.cpp
	$(CXX) ex1-11.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-11

ex1-16: ex1-16.cpp
	$(CXX) ex1-16.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-16

ex1-17: ex1-17.cpp
	$(CXX) ex1-17.cpp $(INCDIRS) $(CXXFLAGS) -o ex1-17

clean: 
	rm -f *.o *.d
