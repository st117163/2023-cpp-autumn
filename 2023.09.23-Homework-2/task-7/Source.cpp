#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (n / 10 == 1) std::cout << "X";
	if (n / 10 == 2) std::cout << "XX";
	if (n / 10 == 3) std::cout << "XXX";
	if (n / 10 == 4) std::cout << "XL";
	if (n / 10 == 5) std::cout << "L";
	if (n / 10 == 6) std::cout << "LX";
	if (n / 10 == 7) std::cout << "LXX";
	if (n / 10 == 8) std::cout << "LXXX";
	if (n / 10 == 9) std::cout << "XC";
	if (n / 10 == 10) std::cout << "C";

	if (n % 10 == 1) std::cout << "I";
	if (n % 10 == 2) std::cout << "II";
	if (n % 10 == 3) std::cout << "III";
	if (n % 10 == 4) std::cout << "IV";
	if (n % 10 == 5) std::cout << "V";
	if (n % 10 == 6) std::cout << "VI";
	if (n % 10 == 7) std::cout << "VII";
	if (n % 10 == 8) std::cout << "VIII";
	if (n % 10 == 9) std::cout << "IX";

	std::cout << std::endl;

	return EXIT_SUCCESS;
}