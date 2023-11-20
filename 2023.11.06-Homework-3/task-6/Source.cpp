#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int f0 = 0;
	int f1 = 1;
	int f = f0 + f1;

	for (int i = 2; i <= n; ++i)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;
	}
	if (n == 0)
	{
		std::cout << 0 << std::endl;
	}
	else
	{
		std::cout << f << std::endl;
	}
	return EXIT_SUCCESS;
}