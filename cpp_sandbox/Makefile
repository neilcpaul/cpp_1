# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#-g  adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -Wall

# the build target executable:
TARGET = whilestatement forstatement

all: $(TARGET)

whilestatement:
		$(CC) $(CFLAGS) -o whilestatement whilestatement.cpp

forstatement:
		$(CC) $(CFLAGS) -o forstatement forstatement.cpp

clean:
	$(RM) $(TARGET)