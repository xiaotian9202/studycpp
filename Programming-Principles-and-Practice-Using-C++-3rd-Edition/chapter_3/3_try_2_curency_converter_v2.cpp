#include <iostream>

int main()
{
    constexpr double doller_per_yen = 0.0064;
    constexpr double doller_per_kroner = 0.11;
    constexpr double doller_per_pound = 1.32;
    constexpr double doller_per_swiss_franc = 1.24;

    double number_money = 1;
    char currency_code = ' ';

    std::cout << "Please enter a number followed by a currency code(y or k or p or s):\n";
    std::cin >> number_money >> currency_code;

    switch(currency_code) {
        case 'y':
            std::cout << number_money << "yen == " << doller_per_yen * number_money << "doller\n";
            break;
        case 'k':
            std::cout << number_money << "kroner == " << doller_per_kroner * number_money << "doller\n";
            break;
        case 'p':
            std::cout << number_money << "pound == " << doller_per_pound * number_money << "doller\n";
            break;
        case 's':
            std::cout << number_money << "swiss franc == " << doller_per_swiss_franc * number_money << "doller\n";
            break;
        default:
            std::cout << "Sorry, I don't know a currency code called " << currency_code << "\n";
    }

}