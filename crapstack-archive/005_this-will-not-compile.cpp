#include <iostream>

int main( void )
{
    double a;
    std::cout << "Podaj a: ";
    std::cin >> a;

    double b;
    std::cout << "Podaj b: ";
    std::cin >> b;

    std::cout << "a % b = " << a % b << std::endl;

    // This will not compile, because you can only do modulo on integers

    return 0;
}
