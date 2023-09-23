#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k;
	std::cin >> m;
	std::cin >> n;

	int t = 0;

	if (n <= k)
	{
		t = m * 2;
	}
	else if (n * 2 % k == 0)
	{
		t = m * n * 2 / k;
	}
	else
	{
		t = m * (n * 2 / k + 1);
	}

	std::cout << t << std::endl;
	return EXIT_SUCCESS;
}