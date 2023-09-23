#include<iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;

	std::cin >> v;
	std::cin >> t;

	int c = v * t % 109;

	std::cout << (c + 109) % 109 + 1 << std::endl;

	return EXIT_SUCCESS;
}