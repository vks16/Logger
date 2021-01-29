output: main.o Log.o string.o
	g++ main.o log.o string.o

main.o: main.cpp
	g++ -c main.cpp

Log.o: Log.cpp Log.h
	g++ -c Log.cpp

string.o: string.cpp string.h
	g++ -c string.cpp

clean: 
	rm *.o a.out *.gch
