#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	int size = 0;

	std::cin >> size;

	int* arr = (int*)malloc(size * sizeof(int));

	if (arr)  //to avoid Warning C6011
	{
		std::cin >> *arr;

		int i_max = 0;
		int i_min = 0;

		for (int i = 1; i < size; ++i)
		{
			std::cin >> *(arr + i);

			if (*(arr + i_max) <= *(arr + i))
			{
				i_max = i;
			}
			if (*(arr + i_min) > *(arr + i))
			{
				i_min = i;
			}
		}
		int temp = *(arr + i_max);
		*(arr + i_max) = *(arr + i_min);
		*(arr + i_min) = temp;

		for (int i = 0; i < size; ++i)
		{
			std::cout << *(arr + i) << ' ';
		}
		free(arr);
	}
	return EXIT_SUCCESS;
}