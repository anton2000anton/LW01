#include <iostream>
#include "ArrayLibrary.h"
using namespace ArrayExtension;
using namespace std;

int main() 
{
	int n = inputNumber();
	int* array = allocateMemory(n);

	cout << "Enter array" << endl;
	inputArray(array, n);
	cout << "Array: ";
	displayArray(array, n);

	int m = 0, c = 0;
	int *newArray = allocateMemory(n), *reArray = allocateMemory(n);
	inputNewArray(array, newArray, reArray, n, m, c);

	cout << "New Array: ";
	displayArray(newArray, m);

	cout << "Array: ";
	displayArray(reArray, c);

	quickSort(reArray, c);
	
	cout << "Sorted array: ";
	displayArray(reArray, c);

	system("pause");

	return 0;

}
