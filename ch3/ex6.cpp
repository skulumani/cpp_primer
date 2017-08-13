// Convert fuel consumption metrics
#include <iostream>
int main()
{
    const float LITERS2GALLONS = 1 / 3.875;
    const float KM2MI = 62.14 / 100;
    
    float lpkm, mpg;

    std::cout << "Enter fuel consumption in L/100 KM: ";
    std::cin >> lpkm;

    mpg = (1 / lpkm) * KM2MI * 1 / LITERS2GALLONS * 100;
    std::cout << lpkm << " liters/100 km = " << mpg << " miles/gallon." << std::endl;
    return 0;
}
