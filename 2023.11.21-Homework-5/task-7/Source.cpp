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
		int step = 0;
		for (int i = 0; i < size; ++i)
		{
			if (*(arr + i) > 0)
			{
				*(arr + i - step) = *(arr + i);
			}
			else
			{
				++step;
			}
		}
		int new_size = n_pos;

		int* temp_arr = (int*)realloc(arr, new_size * sizeof(int));//realloc needs to free excess memory
		if (temp_arr)//to avoid Warning C6308
		{
			arr = temp_arr;
		}
		for (int i = 0; i < new_size; ++i)
		{
			std::cout << *(arr + i) << ' ';
		}
		std::cout << std::endl;
		/* 
		std::cout << *(arr + new_size + 1) << std::endl;// to check that excess memory has been freed
		*/
		free(arr);
	}
	return EXIT_SUCCESS;
}