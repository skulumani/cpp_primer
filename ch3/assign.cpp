//  type changes on assignment
#include <iostream>
int main()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float tree = 3;
    int guess = 3.9832;
    int debt = 7.2e12;
    std::cout << "tree = " << tree << std::endl;
    std::cout << "guess = " << guess << std::endl;
    std::cout << "debt = " << debt << std::endl;
    return 0;
}
