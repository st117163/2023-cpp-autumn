#include <iostream>

void hanoiUnfair_recursion(int n, int a, int b);

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	hanoiUnfair_recursion(n, 1, 3);
	return EXIT_SUCCESS;
}

void hanoiUnfair_recursion(int n, int a, int b)
{
	if (n <= 0)
	{
		return;
	}
	int buf = 6 - a - b;
	if (n == 1)
	{
		std::cout << n << " " << a << " " << b << std::endl;
	}
	else
	{
		hanoiUnfair_recursion(n - 1, a, b);
		std::cout << n << " " << a << " " << buf << std::endl;
		hanoiUnfair_recursion(n - 1, b, a);
		std::cout << n << " " << buf << " " << b << std::endl;
		hanoiUnfair_recursion(n - 1, a, b);
	}
}