#include <iostream>
#include "Chapter6.h"

int count_calls()
{
    static int calls = 0;
    for (int ii = 0; ii <= calls; ++ii)
    {
        std::cout << ii; 
    }
    std::cout << std::endl;
    return ++calls;
}

int main()
{
    for (int ii = 0; ii < 10; ++ii)
    {
        count_calls();
    }
    return 0;
}
