#include <iostream>

int main()
{
    for (int i = 65; i < 91; i++)
        std::cout << char(i) << '\t' << i << '\n';

    for (int i = 48; i < 58; i++)
        std::cout << char(i) << '\t' << i << '\n';
    
    for (int i = 97; i < 123;  i++)
        std::cout << char(i) << '\t' << i << '\n';
}