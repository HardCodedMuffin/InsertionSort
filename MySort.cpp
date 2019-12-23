#include "MySort.h"
#include <time.h>
#include <iostream>

/* Constructor */
MySort::MySort()
{
	data = new double[MAX];
}

/* Assigning completely random generated double variable 
to the array with changing seed. */
void MySort::assingRandom()
{
	srand(time(NULL));
	for (int i = 0; i < MAX; i++) 
		data[i] = (double)rand() / double(MAX);	
}

/* Simply prints all element of the array with for loop. */
void MySort::printData()
{
	for (int i = 0; i < MAX; i++)
		std::cout << data[i] << " ";
}	

/* This function prints all elements of the array passed as a parameter. */
void MySort::printArray(double* sortedValues)
{
	for (int i = 0; i < MAX; i++)
		std::cout << sortedValues[i] << " ";
	std::cout << std::endl;
}

/* The function that compares pairs and selecting the lower one than taking the element where should it belongs with while loop. 
In the for loop array going to the parted unsorted and sorted array.
If it is not necessary that prevents to look again to sorted part of the array. */
double* MySort::sortAscending()
{
	for (int uns = 1; uns < MAX; uns++) {
		double nextItem = data[uns];
		int pos = uns;
		while (pos > 0 && data[pos - 1] > nextItem) {
			data[pos] = data[pos - 1];
			pos--;
		}
		data[pos] = nextItem;
	}
	return data;
}

/* Same things going on with sortAscending() function. 
The only change is the nextItem should be lower than the previous one. 
Sign direction changed in while loop. 
data[pos - 1] > nextItem -> data[pos - 1] < nextItem */
double* MySort::sortDescending()
{
	for (int uns = 1; uns < MAX; uns++) {
		double nextItem = data[uns];
		int pos = uns;
		while (pos > 0 && data[pos - 1] < nextItem) {
			data[pos] = data[pos - 1];
			pos--;
		}
		data[pos] = nextItem;
	}
	return data;
}
