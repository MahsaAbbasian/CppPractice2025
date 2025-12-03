#include <iostream>
int main()
{
    int number {};
    std::cout << "Enter a positive integer to calculate its factorial: ";
    std::cin >> number;

    int result = 1;
    if(number >=0){
        for (int i=1; i<=number; ++i){

            result *= i;
        }
        std:: cout<< "teh factorial of " << number << " is " << result << "\n";
    }
    return 0;
}