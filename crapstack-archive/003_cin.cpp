#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;

    cout << "Podaj liczbe calkowita" << endl;
    cin >> a;
    cout << "Error? " << cin.fail() << endl;
    cin.clear();
    cin.ignore(100,'\n'); //purges up to 100 characters

    cout << "Podaj liczbe zmiennoprzecinkowa" << endl;
    cin >> b;
    cout << "Error? " << cin.fail() << endl;

    cout << "a = " << a << endl << "b = " << b << endl;

    return 0;
}
