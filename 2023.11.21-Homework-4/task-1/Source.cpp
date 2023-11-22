#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	int size = 0;

	std::cin >> size;

	int* arr = (int*)malloc(size * sizeof(int));

	if (arr)  //to avoid Warning C6011
	{
		int n_pos = 0;

		for (int i = 0; i < size; ++i)
		{
			std::cin >> *(arr + i);

			if (*(arr + i) > 0)
			{
				++n_pos;
			}
		}
		std::cout << n_pos << std::endl;
		free(arr);
	}
	return EXIT_SUCCESS;
}