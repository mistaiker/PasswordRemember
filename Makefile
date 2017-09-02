CC = g++
CFLAGS  = -g -Wall -Werror
source = ./Source/
bin = ./Bin/
default: passGen

passGen: main.o PasswordFileReader.o
	echo "Generation passGen"
	$(CC) $(CFLAGS)  $(bin)PasswordFileReader.o $(bin)main.o -o $(bin)passGen

main.o: ./Source/main.cpp
	echo "Generation main.o"
	$(CC) $(CFLAGS) -c $(source)main.cpp  -o $(bin)main.o
	
PasswordFileReader.o: $(source)PasswordFileReader.cpp $(source)PasswordFileReader.h
	echo "Generation PasswordFileReader.o"
	$(CC) $(CFLAGS) -c $(source)PasswordFileReader.cpp -o $(bin)PasswordFileReader.o
	
clean:
	rm -f $(bin)*.o $(bin)passGen