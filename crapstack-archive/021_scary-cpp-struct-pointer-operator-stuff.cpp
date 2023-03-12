#include <iostream>
using namespace std;

struct C;

struct D {
    void operator*(D) { cout << "one\n"; }
} C;

struct E {
    void operator*(E) { cout << "two\n"; }
} F;

struct F;

int main() {
    C* C;
    F* F;

    return 0;
}
