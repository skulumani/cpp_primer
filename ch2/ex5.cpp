// Convert LY to AU

#include <iostream>

double ly2au(double);

int main()
{
    double ly;
    std::cout << "Enter the number of light years: ";
    std::cin >> ly;
    std::cout << ly << " light years = " << ly2au(ly) << " astronomical units." 
        << std::endl;
    return 0;
}

double ly2au(double ly)
{
    return ly * 63240;
}

