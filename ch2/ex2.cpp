// Convert furlongs to yards

#include <iostream>

double furlongtoyards(double);

int main()
{
    double furlongs;
    std::cout << "How many furlongs?: ";
    std::cin >> furlongs;
    double yards = furlongtoyards(furlongs);
    std::cout << furlongs << " furlongs = " << yards << " yards." << std::endl;
    return 0;
}

double furlongtoyards(double furlongs)
{
    double yards = furlongs * 220;
    return yards;
}
