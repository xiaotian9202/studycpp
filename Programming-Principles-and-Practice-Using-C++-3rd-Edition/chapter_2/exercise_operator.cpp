// simple program exercise operators
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Please enter an floating-point value: ";
    double n = 0;
    std::cin >> n;

    std::cout << "n == " << n
              << "\nn + 1 == " << n + 1
              << "\nthree times n == " << n*3
              << "\ntwice n == " << n + n
              << "\nn squared == " << n * n
              << "\nhalf of n == " << n / 2
              << "\nsquared root of n == " << sqrt(n)
              << '\n';
}