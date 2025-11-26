#include <iostream>

int main()
{
    std::cout << "Please enter an int value: ";
    int n = 0;
    int b = 0;
    std::cin >> n >> b;

    std::cout << "n / b == " << n / b
              << "\nn % b == " << n % b
              << "\n n/b*b+n%b == " << n / b * b + n % b
              << '\n';
}