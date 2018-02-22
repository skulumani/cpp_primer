// using new with a structure
#include <iostream>
struct inflatable {
    char name[20];
    float volume;
    double price;
};
int main()
{
    inflatable* ps = new inflatable; // pointer and allowcate the memory
    std::cout << "Enter name of inflatable item: ";
    std::cin.get(ps->name, 20);
    std::cout << "Enter a volume in cubic feet: ";
    std::cin >> (*ps).volume;
    std::cout << "Enter price: $";
    std::cin >> (ps->price);
    std::cout << "Name: " << (*ps).name << std::endl;
    std::cout << "Volume: " << ps->volume << " cubic feet\n";
    std::cout << "Price: $" << ps->price << std::endl;
    delete ps;
    return 0;
}

