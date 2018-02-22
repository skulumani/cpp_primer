// exercise 1 
#include <iostream>
#include <cstring>

int main()
{
    char first_name[20];
    char last_name[20];
    char grade;
    int age;
    
    std::cout << "What is your first name? ";
    std::cin.getline(first_name, 20);
    std::cout << "What is your last name? ";
    std::cin.getline(last_name, 20);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Name: " << last_name << ", " << first_name << std::endl;
    std::cout << "Grade: " << (char) (grade + 1) << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}
