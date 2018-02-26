PRODUCT := ex6-10

# directories
BINDIR := bin
INCDIR := include
SRCDIR := src
BUILDDIR := build

# compiler flags
CXX := g++
LINKER := g++
INCDIRS := -I$(INCDIR)
CXXFLAGS := -std=c++11 -Wall -Wextra -pedantic

SRCFILES := $(wildcard $(SRCDIR)/*.cpp)
OBJFILES := $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRCFILES))
DEPFILES := $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.d, $(SRCFILES))

all: $(BINDIR)/ex6-10 $(BINDIR)/ex6-1 $(BINDIR)/fact_main

# link the object files
$(BINDIR)/ex6-10: $(SRCDIR)/ex6-10.cpp $(SRCDIR)/swap.cpp
	$(CXX) $(CXXFLAGS) $(INCDIRS) $^ -o $@

$(BINDIR)/ex6-1: $(SRCDIR)/ex6-1.cpp 
	$(CXX) $(CXXFLAGS) $(INCDIRS) $^ -o $@

$(BINDIR)/fact_main: $(SRCDIR)/fact_main.cpp $(SRCDIR)/fact.cpp
	$(CXX) $(CXXFLAGS) $(INCDIRS) $^ -o $@

clean:
	rm -r $(BUILDDIR)/* $(BINDIR)/*

