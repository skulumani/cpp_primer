// initialize a pointer
#include <iostream>
int main()
{
    int higgens = 5;
    int *ptr = &higgens;

    std::cout << "Value of higgens = " << higgens
        << "; Address of higgens = " << &higgens << std::endl;
    std::cout << "Value of *pt = " << *ptr
        << "; Value of pt = " << ptr << std::endl;
    return 0;
}
