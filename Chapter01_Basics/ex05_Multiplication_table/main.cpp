#include <iostream>
int main()
{
    int number {};
    std::cout<<"Enter a number between 1-10 to calculate the multiplication result after.";
    std::cin>> number;

    for (int i=1; i<=10; ++i){
        std::cout << number << " * " << i << " =" << number * i << "\n";
    }
return 0;
}