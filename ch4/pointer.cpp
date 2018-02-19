// Our first pointer variable
#include <iostream>
int main()
{
    int updates = 6; // declare a variable
    int * p_updates; // delcare a pointer to an int

    p_updates = &updates; // assign address to pointer

    // express the values in two ways
    std::cout << "Values: updates = " << updates;
    std::cout << ", *p_updates = " << *p_updates << std::endl;

    // express teh address two way
    std::cout << "Addresses: &updates = " << &updates;
    std::cout << ", p_updates = " << p_updates << std::endl;

    // use the pointer to change value
    *p_updates = *p_updates + 1;
    std::cout << "Now updates = " << updates << std::endl;
    return 0;
}
