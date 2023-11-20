#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int n = 0;
	int div = 1;

	std::cin >> x;

	while (div <= x)
	{
		if (div * div == x)
		{
			n++;
			break;
		}
		if (div * div > x)
		{
			break;
		}
		if (x % div == 0)
		{
			n += 2;
		}
		++div;
	}

	std::cout << n << std::endl;

	return EXIT_SUCCESS;
}