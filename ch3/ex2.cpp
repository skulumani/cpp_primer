// convert height and weight to BMI
#include <iostream>

int main()
{
    const int FEET2INCHES = 12;
    const float INCHES2METERS = 0.0254;
    const float POUNDS2KILOGRAMS = 1.0 / 2.2;

    int feet, inches, pounds;

    std::cout << "Enter your height feet first: ";
    std::cin >> feet;
    std::cout << "Enter your height inches now: ";
    std::cin >> inches;
    std::cout << "Enter your weight in lbs: ";
    std::cin >> pounds;

    float meters = FEET2INCHES * feet + inches;
    float kilograms = pounds * POUNDS2KILOGRAMS;
    
    std::cout << "You're BMI is: " << kilograms / (meters * meters) << std::endl;
    return 0;
}
