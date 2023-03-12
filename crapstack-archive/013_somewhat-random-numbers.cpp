// Pseudo random number generation

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    srand( time( NULL ) );
    cout << "First draw: " << (( rand() % 200 ) + 100) << endl; // rng from 100 to 200
    int randomass = (( rand() % 100 ) + 0 );
    cout << "Second draw: " << randomass << endl;

    return 0;
}
