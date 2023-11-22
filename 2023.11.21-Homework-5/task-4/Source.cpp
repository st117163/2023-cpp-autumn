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

		int max_n = *arr;

		for (int i = 1; i < size; ++i)
		{
			std::cin >> *(arr + i);

			if (max_n < *(arr + i))
			{
				max_n = *(arr + i);
			}
		}
		std::cout << max_n << std::endl;

		free(arr);
	}
	return EXIT_SUCCESS;
}