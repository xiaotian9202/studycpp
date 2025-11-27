#include <iostream>

void print_square(int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
        result += n;
    std::cout << n << '\t' << result << '\n';
}

int main()
{
    int number = -1;
    std::cout << "Please enter a integer: \n";
    std::cin >> number;
    print_square(number);

}