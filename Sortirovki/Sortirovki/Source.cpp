#include <iostream>

int* initRandomArray(int len, int mn = 0, int mx = 9);
void printArray(int* a, int len);
void swap(int& a, int& b);
void mixArray(int* a, int len);
void BubbleSort(int* a, int len);
void insertionSort(int* a, int len);
void selectionSort(int* a, int len);
int maxElem(int* a, int len);
int minElem(int* a, int len);
void countSort(int* a, int len);
void GnomeSort(int* a, int len);
bool IsSorted(int* a, int len);
void monkeySort(int* a, int len);
void printMenu();

int main(int argc, char* argv[])
{
	int len = 0;
	std::cout << "Input lengh of array" << std::endl;
	std::cin >> len;
	int mn = 0;
	std::cout << "Input bottom limit of values" << std::endl;
	std::cin >> mn;
	int mx = 0;
	std::cout << "Input top limit of values" << std::endl;
	std::cin >> mx;
	int* a = initRandomArray(len, mn, mx);
	bool exit = false;
	while (!exit)
	{
		{
			system("cls");
			printMenu();
			printArray(a, len);

		}
		int choice = 0;
		{
			std::cin >> choice;
		}
		{
			switch (choice)
			{
			case 0:
				exit = true;
				break;
			case 1:
				printArray(a, len);
				system("pause");
				break;
			case 2:
				a = initRandomArray(len, mn, mx);
				break;
			case 3:
				mixArray(a, len);
				break;
			case 4:
				BubbleSort(a, len);
				break;
			case 5:
				insertionSort(a, len);
				break;
			case 6:
				selectionSort(a, len);
				break;
			case 7:
				countSort(a, len);
				break;
			case 8:
				GnomeSort(a, len);
				break;
			case 9:
				monkeySort(a, len);
				break;
			case 10:
				std::cout << "Input lengh of array" << std::endl;
				std::cin >> len;
				std::cout << "Input bottom limit of values" << std::endl;
				std::cin >> mn;
				std::cout << "Input top limit of values" << std::endl;
				std::cin >> mx;
				a = initRandomArray(len, mn, mx);
			default:
				std::cout << "Unknown command" << std::endl;
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}

int* initRandomArray(int len, int mn, int mx)
{
	srand(time(0));
	int* a = new int[len] {0};

	for (int i = 0; i < len; ++i)
	{
		a[i] = rand() % (mx - mn + 1) + mn;
	}
	return a;
}

void printArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void mixArray(int* a, int len)
{
	srand(time(0));
	for (int i = 0; i < len; ++i)
	{
		swap(a[i], a[rand() % len]);
	}
}

void BubbleSort(int* a, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void insertionSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		int temp = i;

		while (temp > 0 && a[temp] < a[temp - 1])
		{
			swap(a[temp], a[temp - 1]);
			--temp;
		}
	}
}

void selectionSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		int minInd = i;

		for (int j = i + 1; j < len; ++j)
		{
			minInd = (a[minInd] <= a[j] ? minInd : j);
		}
		swap(a[i], a[minInd]);
	}
}

int maxElem(int* a, int len)
{
	int res = a[0];

	for (int i = 1; i < len; ++i)
	{
		res = (res > a[i] ? res : a[i]);
	}
	return res;
}

int minElem(int* a, int len)
{
	int res = a[0];

	for (int i = 1; i < len; ++i)
	{
		res = (res < a[i] ? res : a[i]);
	}
	return res;
}

void countSort(int* a, int len)
{
	int max = maxElem(a, len);
	int min = minElem(a, len);
	int dif = max - min;
	int* counts = new int[dif + 1]{ 0 };

	for (int i = 0; i < len; ++i)
	{
		++counts[a[i] - min];
	}

	int j = 0;

	for (int i = 0; i <= dif; ++i)
	{
		while (counts[i])
		{
			a[j] = i + min;
			++j;
			--counts[i];
		}
	}
}

void GnomeSort(int* a, int len)
{
	int Ind = 1;
	while (Ind < len)
	{
		if (Ind == 0 || a[Ind] >= a[Ind - 1])
			++Ind;
		else
		{
			swap(a[Ind - 1], a[Ind]);
			--Ind;
		}
	}
}

bool IsSorted(int* a, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void monkeySort(int* a, int len)
{
	while (!IsSorted(a, len))
	{
		mixArray(a, len);
	}
}
void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Generate random Array" << std::endl;
	std::cout << "3 - Mix array" << std::endl;
	std::cout << "4 - bubbleSort array" << std::endl;
	std::cout << "5 - insertionSort array" << std::endl;
	std::cout << "6 - selectionSort array" << std::endl;
	std::cout << "7 - countSort array" << std::endl;
	std::cout << "8 - gnomeSort array" << std::endl;
	std::cout << "9 - monkeySort array" << std::endl;
	std::cout << "10 - change settings" << std::endl;
}