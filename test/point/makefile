main: main.o Point.o
	g++ -g -o main main.o Point.o

main.o : main.cpp main.h
	 g++ -g  -c main.cpp

Point.o: Point.cpp Point.h
	g++ -g -c Point.cpp

clean:
	rm Point.o main.o main	
