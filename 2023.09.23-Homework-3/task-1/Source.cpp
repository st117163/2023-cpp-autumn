#include <iostream>

int main(int argc, char* argv[])
{
	int t = 0;
	int s = 0;

	std::cin >> t;

	for (int i = 1; i <= t; i++)
	{
		int n = i;

		while (n > 0)
		{
			std::cout << i << " ";
			++s;
			if (s == t)
			{
				return EXIT_SUCCESS;
			}
			--n;
		}
	}
}