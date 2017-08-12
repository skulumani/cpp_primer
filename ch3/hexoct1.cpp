// show hex and octal constants
#include <iostream>
int main()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    std::cout << "Monsieur cuts a striking figure!\n";
    std::cout << "chest = " << chest << "\n";
    std::cout << "waist = " << waist << "\n";
    std::cout << "inseam = " << inseam << "\n";
    return 0;
}
