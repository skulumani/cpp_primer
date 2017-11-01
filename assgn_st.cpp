// assigning structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    std::cout << "bouquet: " << bouquet.name << " for $";
    std::cout << bouquet.price << std::endl;
    
    choice = bouquet; // assign one structure to another
    std:: cout << "choice: " << choice.name << " for $";
    std::cout << choice.price << std::endl;
    return 0;
}
