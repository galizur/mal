CXXFLAGS ?= -g -std=c++23 -Wall -Wextra -Werror

CC = clang
CXX = clang++

step0_repl: step0_repl.cpp
	$(CXX) $(CXXFLAGS) -o step0_repl step0_repl.cpp

all: clean step0_repl

.PHONY: clean

clean:
	rm -f step0_repl *.o
