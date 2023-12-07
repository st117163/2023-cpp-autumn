#include <iostream>

void hanoi_recursion(int n, int a, int b);

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	int a = 1;
	for (int i = n; i > 0; --i)
	{
		if (i % 2 == 0)
		{
			hanoi_recursion(i - 1, a, 2);
			if (a != 3)
			{
				std::cout << i << " " << a << " " << 3 << std::endl;
			}
			a = 2;
		}
		else
		{
			hanoi_recursion(i - 1, a, 3);
			if (a != 2)
			{
				std::cout << i << " " << a << " " << 2 << std::endl;
			}
			a = 3;
		}
	}
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