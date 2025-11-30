#include <iostream>

int main()
{
    int first{};
    int second{};

    while (std::cin >> first >> second)
    {
        if (first == second) 
            std::cout << "The numbers are equal.\n";
        else if (first < second)
            std::cout << "The smaller value is: " << first << "\n"
            << "The larger value is: " << second << "\n";
        else
            std::cout << "The smaller value is: " << second << "\n"
            << "The larger value is: " << first << "\n";
    }
}