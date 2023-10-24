#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;
	
	int sum = 0;
	
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}

	std::cout << sum << std::endl;
	return EXIT_SUCCESS;
}