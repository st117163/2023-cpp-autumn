// similar solution that passes all test on informatics.msk.ru 
#include <iostream>

void hanoiSwap_recursion(int n, int a, int b);

int main(int argv, char* argc[])
{
	int n = 0;
	std::cin >> n;
	hanoiSwap_recursion(n, 1, 3);
	return EXIT_SUCCESS;
}

void hanoiSwap_recursion(int n, int a, int b)
{
	if (n <= 0)
	{
		return;
	}
	int buf = 6 - a - b;
	if (n == 1)
	{
		std::cout << 1 << " " << a << " " << b << std::endl;
	}
	else
	{
		hanoiSwap_recursion(n - 1, a, b);
		hanoiSwap_recursion(n - 2, b, buf);
		std::cout << 0 << " " << a << " " << b << std::endl;
		hanoiSwap_recursion(n - 2, buf, a);
		hanoiSwap_recursion(n - 1, a, b);
	}
}