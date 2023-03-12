#include <iostream>
#include <cstdlib>
#include <ctime>

int wylosuj()
{
    return ( rand() % 10 ) + 1;
}

bool czyBylaWylosowana( int iLiczba, int tab[], int ile)
{
    int i = 0;

    if( ile <= 0 ) return false;
    do
    {
        if( tab[i] == iLiczba ) return true;
        i++;
    } while ( i < ile );

    return false;
}

int main()
{
    srand( time( 0 ) );
    int wylosowane[5];
    int wylosowanych = 0;

    do
    {
        int liczba = wylosuj();
        if ( czyBylaWylosowana( liczba, wylosowane, wylosowanych ) == false )
        {
            wylosowane[wylosowanych] = liczba;
            wylosowanych++;
        }
    } while ( wylosowanych < 5 );

    wylosowanych = 0;

    do
    {
        std::cout << wylosowane[wylosowanych] << std::endl;
        wylosowanych++;
    } while ( wylosowanych < 5 );

    return 0;
}
