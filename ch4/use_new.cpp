// Using the new operator to create a  pointer to a chunk of memory
#include <iostream>

int main()
{
    int* pt = new int;
    *pt = 1001; // store the number into the memory at this address

    std::cout << "int ";
    std::cout << "value = " << *pt << ": location = " << pt << std::endl;

    double* pd = new double; 
    *pd = 10000001.0;

    std::cout << "double ";
    std::cout << "value = " << *pd << ": location = " << pd << std::endl;
    std::cout << "size of pt = " << sizeof(pt);
    std::cout << ": size of *pt = " << sizeof(*pt) << std::endl;
    std::cout << "size of pd = " << sizeof(pd);
    std::cout << ": size of *pd = " << sizeof(*pd) << std::endl;
    return 0;
}
