// precision problems with floats
#include <iostream>
int main()
{
    float a = 2.34E+22f;
    float b = a + 1.0f;

    std::cout << "a = " << a << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    return 0;
}
