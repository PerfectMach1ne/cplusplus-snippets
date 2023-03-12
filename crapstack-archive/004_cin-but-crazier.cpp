#include <iostream>
#include <limits>

int main()
{
    int a;
    float b;

    std::cout << "Podaj liczbe calkowita" << std::endl;
    std::cin >> a;
    std::cout << "Error? " << std::cin.fail() << std::endl;
    std::cin.clear();
    std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' ); // Does the same thing as in 003.cpp, BUT without character limit. "1000 b"-proof.

    std::cout << "Podaj liczbe zmiennoprzecinkowa" << std::endl;
    std::cin >> b;
    std::cout << "Error? " << std::cin.fail() << std::endl;

    std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

    return 0;
}
