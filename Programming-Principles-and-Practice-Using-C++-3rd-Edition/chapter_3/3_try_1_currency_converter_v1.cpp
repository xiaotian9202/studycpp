#include <iostream>

int main()
{
    constexpr double doller_per_yen = 0.0064;
    constexpr double doller_per_kroner = 0.11;
    constexpr double doller_per_pound = 1.32;

    double money = 1;
    char currency_code = ' ';

    std::cout << "Please enter a number followed by a currency(y or k or p):\n";
    std::cin >> money >> currency_code;
    if (currency_code == 'y')
        std::cout << money << "yen == " << doller_per_yen * money << "doller\n";
    else if (currency_code == 'k')
        std::cout << money << "kroner == " << doller_per_kroner * money << "doller\n";
    else if (currency_code == 'p')
        std::cout << money << "pound == " << doller_per_pound * money << "doller\n";
    else
        std::cout << "Sorry, I don't know a currency code called " << currency_code << "\n";
}