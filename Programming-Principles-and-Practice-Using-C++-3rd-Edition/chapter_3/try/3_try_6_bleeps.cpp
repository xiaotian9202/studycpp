#include <iostream>

int main()
{
    std::string dislike = "Broccoli";

    for (std::string temp; std::cin >> temp;)
    {
        if (temp == dislike)
            std::cout << " BLEEP";
        else
            std::cout << ' ' << temp;
    }
}