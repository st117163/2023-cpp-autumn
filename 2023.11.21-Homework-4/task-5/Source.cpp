#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	int size = 0;

	std::cin >> size;

	int* arr = (int*)malloc(size * sizeof(int));

	if (arr)  //to avoid Warning C6011
	{
		for (int i = 0; i < size; ++i)
		{
			std::cin >> *(arr + i);
		}
		for (int i = size - 1; i > -1; --i)
		{
			std::cout << *(arr + i) << ' ';
		}
		free(arr);
	}
	return EXIT_SUCCESS;
}