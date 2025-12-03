#include <iostream>
int main()
{
    int number{};
    std::cout<< "Enter a positive integer to start reverse counting from:";
    std:: cin>> number;

    int reverse = 0;
    for(int i=1; i<=number; ++i){
        reverse =number -i+1 ;
         if (reverse > 1){
            std::cout<<reverse<<" , ";
        }else{
        std::cout<<reverse<<".";
        }
      
       
    }
    return 0;
}