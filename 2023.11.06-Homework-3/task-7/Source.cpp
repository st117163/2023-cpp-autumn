#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int d = 1;
	int k = 0;

	std::cin >> n;

	while (d < n)
	{
		d *= 2;
		++k;
	}
	
	std::cout << k << std::endl;

	return EXIT_SUCCESS;
}