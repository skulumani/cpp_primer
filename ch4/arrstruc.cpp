// Array of structure
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    inflatable guests[2] =  // each element is a structure with three members
        {
            {"Bambi", 0.5, 21.99}, // first structure in array 
            {"Godzilla", 2000, 565.99} // second structure
        };
    
    std::cout << "The guests " << guests[0].name << " and " << guests[1].name 
        << "\nhave a combined volumen of " 
        << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
}
