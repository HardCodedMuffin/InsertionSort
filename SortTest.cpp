#include <iostream>
#include "MySort.h"

using namespace std;

int main() {
	MySort sorter;
	double* sortedValues;

	cout << "Random Numbers\n----------------------------------\n";
	sorter.assingRandom();
	sorter.printData();

	cout << "\n\nNumbers sorted by ascending order\n----------------------------------\n";
	sortedValues = sorter.sortAscending();
	sorter.printArray(sortedValues);


	cout << "\nNumbers sorted by descending order\n----------------------------------\n";
	sortedValues = sorter.sortDescending();
	sorter.printArray(sortedValues);


	return 0; 
}	