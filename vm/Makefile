TARGET := ../cogwars

CC = g++

BUILDDIR := build
SRCDIR := src

SRCS := $(shell find $(SRCDIR) -type f -name *.cpp)
OBJS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCS:.cpp=.o))

INC_DIR := .
INC := -I$(INC_DIR)
INCLIB := -L.
LIB := -lpthread -lncurses

CPPFLAGS ?= $(INC_FLAGS)

$(TARGET): $(OBJS)
	@echo " Linking..."
	@echo " $(CC) $(INCLIB) $(INC) $^ -o $(TARGET) $(LIB)"; $(CC) $(INCLIB) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CPPFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CPPFLAGS) $(INC) -c -o $@ $<

clean:
	rm -rf $(BUILDDIR)
	rm $(TARGET)

.PHONY: clean
