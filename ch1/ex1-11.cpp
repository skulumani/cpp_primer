#include <iostream>
int main()
{
    int start = 0, end = 0, sum = 0 , ii = 0;
    std::cout << "Enter two integers start and end: " << std::endl;
    std::cin >> start >> end;
    
    ii = start;
    while (ii <= end)
    {
        std::cout << ii << std::endl;
        ++ii;
    }
    return 0;
}
