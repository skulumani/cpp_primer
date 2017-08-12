// using escape sequences
#include <iostream>
int main()
{
    std::cout << "\aOperation \"HyperHyper\" is n ow activate!\n";
    std::cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    std::cin >> code;
    std::cout << "\aYou entered " << code << "...\n";
    std::cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}
