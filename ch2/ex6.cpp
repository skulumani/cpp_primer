// Print out the time properly

#include <iostream>

void printtime(int, int);

int main()
{
    int hour;
    int min;
    std::cout << "Enter the number of hours: ";
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    std::cin >> min;

    printtime(hour, min);
    return 0;
}

void printtime(int hour, int min)
{
    std::cout << "Time: " << hour << ":" << min << std::endl;
}
