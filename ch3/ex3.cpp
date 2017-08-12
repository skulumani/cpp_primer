// convert latitude dms to decimal

#include <iostream>
int main()
{
    const int MIN2SEC = 60;
    const int SEC2ARC = 60;
    const int DEG2MIN = 60;
    
    float deg, min, sec, decimal;

    std::cout << "Enter a latitude in degrees, minutes, and seconds: " << std::endl;
    std::cout << "First, enter the degrees: ";
    std::cin >> deg;
    
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> min;

    std::cout << "Finally, enter the seconds of arc: " ;
    std::cin >> sec;

    decimal = deg + min / MIN2SEC + sec / MIN2SEC / SEC2ARC;

    std::cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " 
              << decimal << " degrees" << std::endl;
    return 0;
        
}
