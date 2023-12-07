#include <iostream>

void hanoiUnesco_recursion(int n, int a, int b);

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	hanoiUnesco_recursion(n, 1, 3);
	return EXIT_SUCCESS;
}

void hanoiUnesco_recursion(int n, int a, int b)
{
	if (n <= 0)
	{
		return;
	}
	int buf = 6 - a - b;
	if (a + b == 4)
	{
		hanoiUnesco_recursion(n, a, 2);
		hanoiUnesco_recursion(n, 2, b);
	}
	else
	{
		hanoiUnesco_recursion(n - 1, a, buf);
		std::cout << n << " " << a << " " << b << std::endl;
		hanoiUnesco_recursion(n - 1, buf, b);
	}
}