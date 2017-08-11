// Conert celsius to farhenheit

#include <iostream>

double c2f(double);

int main ()
{
    double celsius;
    std::cout << "Temperature in C?: ";
    std::cin >> celsius;
    double farhenheit = c2f(celsius);
    std::cout << celsius << " C = " << farhenheit << " F." << std::endl;
    return 0;
}

double c2f(double c)
{
    return 1.8 * c + 32.0;
}
