#include <iostream>

int main()
{
    int first = -1;
    int second = -1;

    while (std::cin >> first >> second)
    {
        if (first < second)
            std::cout << "The smaller value is: " << first << "\n" 
            << "The larger value is: " << second << "\n";
        else if (first == second);
        else
            std::cout << "The smaller value is: " << second << "\n"
            << "The larger value is: " << first << "\n";


    }
}