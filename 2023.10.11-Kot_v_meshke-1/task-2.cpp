#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;
	
	int i = 0;
	
	if (n > 0)
	{
		while (i <= n)
		{
			std::cout << i << " ";
			++i;
		}
	}
	else
	{
		while (i >= n)
		{
			std::cout << i << " ";
			--i;
		}
	}	
		
	return EXIT_SUCCESS;
}