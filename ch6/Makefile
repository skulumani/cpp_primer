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


# link the object files
$(BINDIR)/$(PRODUCT): $(OBJFILES)
	$(LINKER) $(CXXFLAGS) $^ -o $@

# compile src to object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCDIRS) -c $< -o $@

# build dependencies
$(BUILDDIR)/%.d: $(SRCDIR)/%.cpp
	$(CXX) $(INCDIRS) -MM $< | sed 's/^/$@ /' > $@

$(OBJDIR)/%.d: $(SRCDIR)/%.cpp
	$(CXX) $(INCDIRS) -MM $< | sed -e 's%^%$@ %' -e 's% % $(OBJDIR)/%' > $@

-include $(DEPFILES)
