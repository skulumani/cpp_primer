// convert height in inches to feet and inches

#include <iostream>

int main()
{
    const int INCHES2FEET = 12;
    int height;

    std::cout << "Enter your height in inches:________\b\b\b\b\b\b\b\b";
    std::cin >> height;

    int feet = height / INCHES2FEET;
    int inches = height % 12;
    std::cout << "You're height: " << height << " inches." << std::endl;
    std::cout << feet << " ft, " << inches << " inches." << std::endl;
    return 0;
}
