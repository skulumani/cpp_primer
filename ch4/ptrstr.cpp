// Using pointers to strings
#include <iostream>
#include <cstring>

int main()
{
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps; // unitialized pointer

    std::cout << animal << " and ";
    std::cout << bird << "\n";
    // std::cout << ps << "\n";
    return 0;
}
