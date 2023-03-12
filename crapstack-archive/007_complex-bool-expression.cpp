#include <iostream>
using namespace std;

int main()
{
    bool wynik;

    wynik = true && false || !true && false || !( !true && false ); // I think the expression in ()'s is true, which is why it plops out a '1' in the cout
    cout << "wynik = " << wynik << endl;

    return 0;
}
