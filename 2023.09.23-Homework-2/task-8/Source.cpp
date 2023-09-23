#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int temp = 0;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    std::cout << a << " " << b << " " << c << std::endl;

    return EXIT_SUCCESS;
}