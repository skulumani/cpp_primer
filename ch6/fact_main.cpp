#include "Chapter6.h"

#include <iostream>

int main()
{
    int val = 0;
    std::cout << "Enter an integer: ";
    std::cin >> val;

    std::cout << val << " factorial is " << fact(val) << " bitch." << std::endl;
    return 0;
}
