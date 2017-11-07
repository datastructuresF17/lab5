
output: sortedlist.o SortedListInterface.o
	g++ sortedlist.o SortedListInterface.o -o run

giftlist.o: sortedlist.cpp
	g++ -c -std=c++0x sortedlist.cpp

classdef.o: SortedListInterface.cpp SortedListInterface.h
	g++ -c -std=c++0x SortedListInterface.cpp

clean:
	rm *.o run
