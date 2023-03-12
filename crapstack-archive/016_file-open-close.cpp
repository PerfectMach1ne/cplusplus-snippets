#include <iostream>
#include <fstream>

int main( void )
{
    std::fstream file;
    file.open( "chicken.txt", std::ios::in | std::ios::out );
    if ( file.good() && file.is_open() )
    {
        std::cout << "Filed opened" << std::endl;
        file.close();
    } else
    {
        std::cerr << "File not opened" << std::endl;
    }

    return 0;
}
