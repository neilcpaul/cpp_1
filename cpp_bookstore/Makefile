# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#-g  adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -Wall

# the build target executable:
TARGET = Simple_example Simple_example2 Simple_example3

all: $(TARGET)

Simple_example:
		$(CC) $(CFLAGS) -o Simple_example Simple_example.cpp

Simple_example2:
		$(CC) $(CFLAGS) -o Simple_example2 Simple_example2.cpp
		
Simple_example3:
		$(CC) $(CFLAGS) -o Simple_example3 Simple_example3.cpp

clean:
	$(RM) $(TARGET)