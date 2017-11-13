output: LinkedSortedList-driver.o
	g++ LinkedSortedList-driver.o -o run

LinkedSortedList-driver.o: LinkedSortedList-driver.cpp
	g++ -c -std=c++14 LinkedSortedList-driver.cpp

clean:
	rm *.o run
