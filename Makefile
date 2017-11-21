output: sortedlist.o
	g++ sortedlist.o -o run

sortedlist.o: sortedlist.cpp
	g++ -c -std=c++14 sortedlist.cpp

clean:
	rm *.o run
