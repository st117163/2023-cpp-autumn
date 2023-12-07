#include <iostream>

void hanoi_recursion(int n, int a, int b);

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	hanoi_recursion(n, 1, 3);
	return EXIT_SUCCESS;
}

void hanoi_recursion(int n, int a, int b)
{
	if (n <= 0)
	{
		return;
	}
	int buf = 6 - a - b;
	hanoi_recursion(n - 1, a, buf);
	std::cout << n << " " << a << " " << b << std::endl;
	hanoi_recursion(n - 1, buf, b);
}