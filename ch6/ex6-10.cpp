// Using a function and passing pointers
#include <iostream>

#include "Chapter6.h"

int main(){
    int a, b;
    int *pa = &a, *pb = &b;

    std::cout << "Enter two integers: ";
    std::cin >> *a >> *b;

    swap_pointer(*a, *b);

    std::cout << "Now a = " << a << " and b = " << b << std::endl;
    return 0;
}

