// Read name and age
#include <iostream>

int main()
{
    std::cout << "Please enter your first-name and age\n";
    double age = -1;                       // int variable (-1 means "don't kown the age")
    std::string first_name = "????";    // string variable ("????"" indicates "don't kown the name")

    std::cin >> first_name >> age;

    std::cout << "Hello," << first_name 
        << "(age " << age << "years = "  
        << age*12 <<" month)\n";
}