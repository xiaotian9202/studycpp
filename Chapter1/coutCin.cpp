#include <iostream>  // for std::out and std::cin

int main()
{
    std::cout << "Enter a number: ";  // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    int y{}; // define variable y to hold user input
    std::cin >> y; // get number from keyboard and store it in variable y
    int z{}; // define variable z to hold user input
    std::cin >> z; // get number from keyboard and store it in variable z

    std::cout << "You entered " << x;
    std::cout << ',';
    std::cout << y << ',' << " and " << z << ".\n";

    return 0;
}