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
    /* std::cout << ps << "\n"; // this will cause problems since ps is not pointing to anythign */
    
    std::cout << "Enter a kind of animal: ";
    std::cin >> animal; // only okay if input is less than 20 chars
    // std::cin >> ps; // ps does not point to an allocated space
    //

    ps = animal; // ps points to a string
    std::cout << ps << "s!\n";
    std::cout << "Before using strcpy():\n";
    std::cout << animal << " at " << (int *) animal << std::endl;
    std::cout << ps << " at " << (int *) ps << std::endl;

    ps = new char[strlen(animal) + 1]; // allocate new storage
    strcpy (ps, animal); // copy string to new storage
    std::cout << "After using strcpy():\n";
    std::cout << animal << " at " << (int *) animal << std::endl;
    std::cout << ps << " at " << (int *) ps << std::endl;
    delete [] ps;
    return 0;
}
