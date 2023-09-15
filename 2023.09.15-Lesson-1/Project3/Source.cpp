#include<iostream>

int main(int argc, char* argv[])
{
	long long a = 0;

	std::cin >> a;
	a = a / 10;

	std::cout << a * (a + 1) * 100 + 25 << std::endl;

	return EXIT_SUCCESS;
}