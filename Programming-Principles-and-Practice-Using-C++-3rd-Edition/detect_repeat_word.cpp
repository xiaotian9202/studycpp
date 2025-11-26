#include <iostream>

int main()
{
    std::string previous;           // previous word; initiaized to ""
    std::string current;            // current word

    while(std::cin >> current)
    {
        if (current == previous)
            std::cout << "repeat word: " << current << '\n';
        previous = current;
    }
}