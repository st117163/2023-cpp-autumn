#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	std::cin >> k;

	for (int i = 1; i <= k; ++i)
	{
		int inverted = 0;
		int temp = i;

		while (temp > 0)
		{
			inverted *= 10;
			inverted += temp % 10;
			temp /= 10;
		}

		if (i == inverted)
		{
			++n;
		}
	}

	std::cout << n << std::endl;

	return EXIT_SUCCESS;
}