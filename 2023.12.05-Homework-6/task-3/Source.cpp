#include <iostream>

void hanoiCycle_recursion(int n, int a, int b);

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	hanoiCycle_recursion(n, 1, 3);
	return EXIT_SUCCESS;
}

void hanoiCycle_recursion(int n, int a, int b)
{
	if (n <= 0)
	{
		return;
	}
	int buf = 6 - a - b;
	if ((a == 1) && (b == 2) || (a == 2) && (b == 3) || (a == 3) && (b == 1))
	{
		hanoiCycle_recursion(n - 1, a, buf);
		std::cout << n << " " << a << " " << b << std::endl;
		hanoiCycle_recursion(n - 1, buf, b);
	}
	else
	{
		hanoiCycle_recursion(n - 1, a, b);
		std::cout << n << " " << a << " " << buf << std::endl;
		hanoiCycle_recursion(n - 1, b, a);
		std::cout << n << " " << buf << " " << b << std::endl;
		hanoiCycle_recursion(n - 1, a, b);
	}
}