#include "ArrayLibrary.h"
#include <iostream>
#include "cmath"



int* ArrayExtension::allocateMemory(int n)

{

	if (n <= 0)

	{
		throw std::invalid_argument("Count of array elements can not be less or equal 0.");
	}

	int* array = new int[n];

	return array;
}



void ArrayExtension::inputArray(int * array, int n)

{
	if (array == nullptr)
	{
		throw std::invalid_argument("Array can not be null.");
	}

	if (n <= 0)
	{
		throw std::invalid_argument("Count of array elements can not be less or equal 0.");
	}

	for (int* p = array, i = 1; p < array + n; p++, i++)
	{
		std::cout << "a[" << i << "] = ";
		std::cin >> *p;
	}
}



int ArrayExtension::inputNumber()
{
	int n;
	std::cout << "Enter number: ";
	std::cin >> n;

	return n;
}



void ArrayExtension::displayArray(int * array, int n) {

	if (array == nullptr) 
	{
		throw std::invalid_argument("Array can not be null.");
	}

	if (n <= 0) 
	{
		throw std::invalid_argument("Count of array elements can not be less or equal 0.");
	}

	for (int* p = array; p < array + n; p++) 
	{
		std::cout << *p << " ";
	}

	std::cout << std::endl;
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



void quickSort(int* array, int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivot = array[(left + right) / 2];

	while (i <= j) {
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i <= j) {
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			j--;
		}
	}

	if (left < j)
		quickSort(array, left, j);

	if (i < right)
		quickSort(array, i, right);
}
