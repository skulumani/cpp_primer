// Using the delete operator to read in a giant string
#include <iostream>
#include <cstring>
char* getname(void); // function prototype
int main()
{
    char * name;
    name = getname(); // assign the address of string to name
    std::cout << name << " at " << (int *) name << "\n";
    delete [] name; // free the memory

    name = getname();
    std::cout << name << " at " << (int *) name << "\n";
    delete [] name;
    return 0;
}

char * getname()
{
    char temp[80];
    std::cout << "Enter last name: ";
    std::cin >> temp;
    char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}

