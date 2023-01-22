# This is an example of a makefile

# Macros definition
# Compiler
CC = gcc
# Options
OPTIONS = -g -W -Wall

# First objective > app
# Dependencies: file1.o and file2.o
app: app.o file1.o file2.o
# Rule to execute
	$(CC) $(OPTIONS) -o app app.o file1.o file2.o

app.o: app.c
# Rule to execute
	$(CC) $(OPTIONS) -c app.c

file1.o: file1.c file_header.h
	$(CC) $(OPTIONS) -c file1.c

file2.o: file2.c file_header.h
	$(CC) $(OPTIONS) -c file2.c

# Remove all the .o files
delete:
	rm *.o

# Force a make of all the files
all:
	touch *.[ch]
	make