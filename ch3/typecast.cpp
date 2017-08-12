// forcing type changes
#include <iostream>
int main()
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    std::cout << "auks = " << auks << ", bats = " << bats;
    std::cout << ", coots = " << coots << std::endl;

    char ch = 'Z';
    std::cout << "The code for " << ch << " is ";
    std::cout << int(ch) << std::endl;
    return 0;
}
