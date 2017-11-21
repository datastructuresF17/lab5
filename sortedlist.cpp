// Author:   Chad Palmer
// Semester: Fall 2017
// Class:    Data Structures (COSC 2436-004)
// Lab: 4

#include<iostream>
#include<memory>
#include<cstdlib>       // srand and rand
#include<ctime>         // time "seed"
#include "LinkedSortedList.h"

using namespace std;

int fillList(shared_ptr<SortedListInterface<int>> listPtr);
void displayList(shared_ptr<SortedListInterface<int>> listPtr);

int main() {

    srand(time(0));
    shared_ptr<SortedListInterface<int>> listPtr;
    listPtr = make_shared<LinkedSortedList<int>>();

    int lastEntry = fillList(listPtr);

    displayList(listPtr);

    cout << "Last number added: ";
    cout << listPtr->getEntry(lastEntry) << " at position ";
    cout << lastEntry << endl;

    cout << "Deleting last entry added to list... ";
    listPtr->remove(lastEntry);
    cout << "done." << endl << endl;

    displayList(listPtr);

    return 0;
}

void displayList(shared_ptr<SortedListInterface<int>> listPtr)
{
	cout << "The sorted list contains " << endl;
   for (int pos = 1; pos <= listPtr->getLength(); pos++)
   {
      cout << listPtr->getEntry(pos) << ", ";
   } // end for
	cout << endl << endl;
}  // end displayList

int fillList(shared_ptr<SortedListInterface<int>> listPtr)
{
    int randInt = 0;

    for (int i = 0; i < 21; i++) {
        randInt = rand() % 100 + 1;
        listPtr->insertSorted(randInt);
    }
    return listPtr->getPosition(randInt);
}
