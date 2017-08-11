// Determine integer limits

#include <iostream>
#include <climits>

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;

    std::cout << "int is " << sizeof(int) << " bytes." << std::endl;
    std::cout << "short is " << sizeof(n_short) << " bytes." << std::endl;
    std::cout << "long is " << sizeof(n_long) << " bytes." << std::endl << std::endl;

    std::cout << "Maximum values: " << std::endl;
    std::cout << "int: " << n_int << std::endl;
    std::cout << "short: " << n_short << std::endl;
    std::cout << "long: " << n_long << std::endl << std::endl;

    std::cout << "Minimum int value = " << INT_MIN << std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;
    return 0;
}
