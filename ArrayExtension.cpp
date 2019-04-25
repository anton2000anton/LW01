#include "ArrayLibrary.h"
#include <iostream>
#include "cmath"

using namespace std;


int* ArrayExtension::allocateMemory(int n)

{

	if (n <= 0)

	{
		cout << "Count of array elements can not be less or equal 0.";
	}

	int* array = new int[n];

	return array;
}



void ArrayExtension::inputArray(int * array, int n)

{
	if (array == nullptr)
	{
		cout << "Array can not be null.";
	}

	if (n <= 0)
	{
		cout << "Count of array elements can not be less or equal 0.";
	}

	for (int* p = array, i = 1; p < array + n; p++, i++)
	{
		cout << "a[" << i << "] = ";
		cin >> *p;
	}
}



int ArrayExtension::inputNumber()
{
	int n;
	cout << "Enter number: ";
	cin >> n;

	return n;
}



void ArrayExtension::displayArray(int * array, int n) {

	if (array == nullptr) 
	{
		cout << "Array can not be null.";
	}

	if (n <= 0) 
	{
		cout << "Count of array elements can not be less or equal 0.";
	}

	for (int* p = array; p < array + n; p++) 
	{
		cout << *p << " ";
	}

	cout << endl;
}



void ArrayExtension::inputNewArray(int* array, int* newarray, int* rearray, int n, int& m, int& c)

{
	c = 0;
	m = 0;

	int k = 0, l = 0;


	for (int i = 0; i < n; i++)
	{
		if (array[i] % 2 == 0 && i % 2 == 0)
		{
			newarray[k] = array[i];
			k++;
			m++;
		}
		else
		{
			rearray[l] = array[i];
			l++;
			c++;
		}
	}
}



void ArrayExtension::quickSort(int* array, int size)
{
	int i = 0;
	int j = size - 1;

	int mid = array[size / 2];

	do
	{
		while (array[i] > mid) 
		{
			i++;
		}
		
		while (array[j] < mid)
		{
			j--;
		}

		if (i <= j) 
		{
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;

			i++;
			j--;
		}
	} while (i <= j);


	if (j > 0)
	{
		quickSort(array, j + 1);
	}
	if (i < size) 
	{
		quickSort(&array[i], size - i);
	}
}
