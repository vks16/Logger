output: main.o Log.o
	g++ main.o log.o 

main.o: main.cpp
	g++ -c main.cpp

Log.o: Log.cpp Log.h
	g++ -c Log.cpp


clean: 
	rm *.o a.out
