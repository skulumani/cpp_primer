// Using a function and passing pointers
#include <iostream>

#include "Chapter6.h"

int main(){
    int a, b;
    int *pa = &a, *pb = &b;

    std::cout << "Enter two integers: ";
    std::cin >> *pa >> *pb;
    
    std::cout << "a = " << *pa << " b = " << *pb << std::endl;
    swap_pointer(pa, pb);

    std::cout << "Now a = " << a << " and b = " << b << std::endl;
    return 0;
}

