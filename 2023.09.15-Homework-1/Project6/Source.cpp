#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a;
	std::cin >> b;

	int c = a / b;
	c = ((c + 2) / (c + 1)) % 2;
	 int d = (c + 1) % 2;

	std::cout << a * c + b * d << std::endl;

	return EXIT_SUCCESS;
}