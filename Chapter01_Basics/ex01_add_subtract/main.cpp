#include <iostream>
int main()
{
    
    std::cout << "Enter first integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter second integer: ";
    int y{};
    std::cin >> y;

    int sum = x + y;
    int difference = x - y;

    std::cout << "Sum: " << sum << '\n';
    std::cout << "Difference: " << difference << '\n';

    return 0;
}
