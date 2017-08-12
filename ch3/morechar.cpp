// the char type and int type contrasted
#include <iostream>
int main()
{
    char ch = 'M';
    int i = ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;

    std::cout << "Add one to teh character code:" << std::endl;
    ch = ch + 1;
    i = ch;
    std::cout << "The ASCII code for " << ch << " is " << i << std::endl;

    std::cout << "Displaying char ch using cou.put(ch): ";
    std::cout.put(ch);

    std::cout.put('!');

    std::cout << std::endl << "Done" << std::endl;
    return 0;
}
