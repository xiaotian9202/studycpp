#include <iostream>

int main()
{
    int a;          //default-initialization (no initializer)

    // Traditional initialization forms
    int b = 5;      // copy-initialization (initial value after equals sign)
    int c(6);       // direct-initialization(initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d {7};      // direct-initialization (initial value in braces)
    int e {};       // value-initialization (empty braces)

    // When should I initialize with {0} vs {}?
    // Use direct-list-initilization when you're actually using the initial value
    int x {0};
    std::cout << x; 

    // Use value-initialization when the object's value is temporary and will be replaced;
    int x{};
    std::cin >> x;

    int width {5}; // define variable width and initialize with initial value 5
    std::cout << width; // print 5

    return 0;
}