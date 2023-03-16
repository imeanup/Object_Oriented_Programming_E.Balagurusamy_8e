CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

SRCDIRS = $(wildcard */)
SRCS = $(wildcard $(addsuffix *.cpp,$(SRCDIRS)))
OBJS = $(SRCS:.cpp=.o)
EXEC = myprogram

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
