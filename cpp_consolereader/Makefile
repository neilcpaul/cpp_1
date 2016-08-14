# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#-g  adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -Wall

# the build target executable:
TARGET = reader summation summation2

all: $(TARGET)

reader:
		$(CC) $(CFLAGS) -o reader reader.cpp

summation:
		$(CC) $(CFLAGS) -o summation summation.cpp

summation2:
		$(CC) $(CFLAGS) -o summation2 summation2.cpp

clean:
	$(RM) $(TARGET)