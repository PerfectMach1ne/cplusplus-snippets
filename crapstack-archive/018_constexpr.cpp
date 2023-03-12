#include <iostream>

int main()
{
    constexpr int k = 4+1;  // C++11 feature; it evaluates a value at COMPILE TIME rather than RUNTIME
    std::cout << k;

    return 0;
}
