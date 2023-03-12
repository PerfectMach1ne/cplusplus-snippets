#include <iostream>

int main( void )
{
    int liczba;
    std::cout << "Podaj liczbe... ";
    std::cin >> liczba;
    char theB = 'B';

    switch ( liczba )
    {
    case 1:
        char theA;
        theA = 'A';
        std::cout << "the " << theA << std::endl;
        break;
    case 2:
        std::cout << "the " << theB << std::endl;
        break;
    case 3:
        {
            char theC = 'C';
            std::cout << "the " << theC << std::endl;
            break;
        }
    default:
        // 2023: LMAO WHAT
        std::cout << "What the fucking hell are you? you great gangly fuck knuckled twat greasy-head cuntbag fuck you." << std::endl;
        break;
    }

    return 0;
}
