#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> dislikes = {"Onion", "Broccoli"};

    for (std::string temp; std::cin >> temp;)
    {
        for (std::string dislike : dislikes)
        {
            if (dislike == temp)
                temp = "BLEEP"; 
        }
        std::cout << " " << temp;
    }
}