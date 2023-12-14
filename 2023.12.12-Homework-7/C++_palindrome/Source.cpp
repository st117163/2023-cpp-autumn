#include<iostream>
#include<string>

bool Palindrom(std::string str)
{
	int len_s = str.length();
	for (int i = 0; i < len_s; ++i)
	{
		if (str[i] != str[len_s - i - 1])
		{
			return 0;
		}
	}
	return 1;
}

int main(int argc, char* argv[])
{
	std::string str = "";
	std::getline(std::cin, str);
	if (Palindrom(str)) {
		std::cout << "\"" << str << "\"" << "is palindrome." << std::endl;
	}
	else
	{
		std::cout << "\"" << str << "\"" << "is not palindrome." << std::endl;
	}
	return EXIT_SUCCESS;
}