#include <iostream>
int main()
{
    int number {};
    std::cout << "Enter an Enteger:";
    std::cin >> number;

    if(number >0){
    if (number % 2 ==0)
        std:: cout << number << "is an even number.\n";
    else 
    std:: cout << number << "is an odd number.\n";
    }
    else {
        std:: cout << "this number is negetive number.\n";
    }
    
    return 0;
}