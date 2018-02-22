#include <iostream>
int main()
{
    int val = 50, sum = 0;
    while (val <= 100)
    {
        sum = sum + val;
        val = val + 1;
    }
    std::cout << "The sum of ints from 50 to 100 is " << sum << std::endl;
    return 0;
}
