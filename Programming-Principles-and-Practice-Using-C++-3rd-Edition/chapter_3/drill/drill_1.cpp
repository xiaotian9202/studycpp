#include <iostream>

int main()
{
    int first = -1;
    int second = -1;

    while(std::cin >> first >> second)
        std::cout << first << " " << second << "\n";
}