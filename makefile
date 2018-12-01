all: main

main: main.cpp node.o
	g++ -std=c++11 main.cpp node.o -o main

node.o: node.cpp
	g++ -std=c++11 -c node.cpp

clean:
	rm -rf *.o main
