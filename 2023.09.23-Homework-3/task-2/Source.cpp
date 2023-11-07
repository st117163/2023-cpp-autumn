#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int inverted = 0;

	std::cin >> n;

	while (n > 0)
	{
		inverted *= 10;
		inverted += n % 10;
		n /= 10;
	}

	std::cout << inverted << std::endl;

	return EXIT_SUCCESS;
}