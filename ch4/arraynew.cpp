// Using the new operator for an array
#include <iostream>
int main()
{
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    std::cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1; // increment the pointer
    std::cout << "Now p3[0] is " << p3[0] << " and ";
    std::cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 -1 ;
    delete [] p3;
    return 0;

}
