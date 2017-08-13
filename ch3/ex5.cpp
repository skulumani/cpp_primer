// MPG calculator
#include <iostream>

int main()
{
    float miles, gallons, mpg;

    std::cout << "Enter number of miles driven: ";
    std::cin >> miles;
    std::cout << "Enter number of gallons used: ";
    std::cin >> gallons;

    mpg = miles / gallons;
    std::cout << "You achieved " << mpg << " miles/gallon." << std::endl;
    return 0;
}
