#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (n % 10 == 0 || (n % 10 >= 5 && n % 10 <= 9) || (n % 100 >= 11 && n % 100 <= 14))
	{
		std::cout << n << " bochek" << std::endl;
	}
	else  if (n % 10 == 1)
	{
		std::cout << n << " bochka" << std::endl;
	}
	else
	{
		std::cout << n << " bochki" << std::endl;
	}
	return EXIT_SUCCESS;
}