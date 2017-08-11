// Some user functions to print lines
#include <iostream>

void printmice(void);
void printrun(void);

int main()
{
    printmice();
    printmice();

    printrun();
    printrun();
}

void printmice(void)
{
    std::cout << "Three blind mice" << std::endl;
}

void printrun(void)
{
    std::cout << "See how they run" << std::endl;
}
