#include "Arr_func.h"
#include <iostream>
#include <ctime>
#include <algorithm>

void printArray(int* a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
}

void expandArray(int*& a, int& len)
{
	int* newA = new int[len + 1]{ 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;
	++len;
}

void addElement(int*& a, int& len, int element)
{
	expandArray(a, len);
	a[len - 1] = element;
}

void contractArray(int*& a, int& len)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < len - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--len;
	}
}

bool indexValid(int index, int len)
{
	return (index >= 0 && index < len);
}

int extractElement(int*& a, int& len, int index)
{
	int res = -1;
	if (indexValid(index, len))
	{
		res = a[index];
		for (int i = index; i < len - 1; ++i)
		{
			a[i] = a[i + 1];
		}
		contractArray(a, len);
	}
	return res;
}

void ReverseArray(int*& a, int len)
{
	int* newA = new int[len]{ 0 };
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[len - 1 - i];
		}
		delete[] a;
		a = newA;
	}
}

void appendRandomElements(int*& a, int& len, int n)
{
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		expandArray(a, len);
		a[len - 1] = rand()- RAND_MAX/2;
	}
}

void extractRepetitions(int*& a, int& len)
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = i + 1; j < len; ++j)
		{
			if (a[i] == a[j])
			{
				extractElement(a, len, j);
			}
		}
	}
}

void swapMinMax(int*& a, int len)
{
	int i_max = 0;
	int i_min = 0;

	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			if (a[i] > a[i_max])
			{
				i_max = i;
			}
			if (a[i] <= a[i_min])
			{
				i_min = i;
			}
		}
		int temp = a[i_max];
		a[i_max] = a[i_min];
		a[i_min] = temp;
	}
}

void stdSort(int* a, int len)
{
	std::sort(a, a + len);
}


void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Append element to array" << std::endl;
	std::cout << "3 - Extract element from array" << std::endl;
	std::cout << "4 - Sort array" << std::endl;
	std::cout << "5 - Reverse array" << std::endl;
	std::cout << "6 - Swap first max &  last min" << std::endl;
	std::cout << "7 - Extract repetitions" << std::endl;
	std::cout << "8 - Append N random elemets" << std::endl;
}