// exceeding some integer limits
#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl
              << "Add $1 to each account." << std::endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nPoor Sam!" << std::endl;
    sam = ZERO;
    sue = ZERO;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl;
    std::cout << "Take $1 from each account." << std::endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl << "Lucky, Sue!" << std::endl;
    return 0;
}

