#include <iostream>
/* а это решение правильно проходит пример, но не проходит все тесты на сайте */
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int n = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> n;

	char ch_a = 'A';
	char ch_b = 'B';

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
		ch_a = 'B';
		ch_b = 'A';
	}

	if (n == b)
	{
		std::cout << ">" << ch_b << std::endl;
	}
	else
	{
		int temp_b = b;
		int gcd = a;

		while (temp_b % gcd != 0)
		{
			int temp = gcd;
			gcd = temp_b % gcd;
			temp_b = temp;
		}
		if ((n % gcd != 0) || ((n > a) && (n > b)))
		{
			std::cout << "Impossible" << std::endl;
		}
		else
		{
			int v = 0;

			while (1)
			{
				v += a;

				std::cout << ">" << ch_a << std::endl;
				std::cout << ch_a << ">" << ch_b << std::endl;

				if (v >= b)
				{
					v %= b;

					if (v == n)
					{
						break;
					}
					std::cout << ch_b << ">" << std::endl;
					std::cout << ch_a << ">" << ch_b << std::endl;
				}
				if (v == 0)
				{
					break;
				}
			}
		}

	}

	return EXIT_SUCCESS;
}