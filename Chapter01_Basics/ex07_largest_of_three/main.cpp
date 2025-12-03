#include <iostream>
int main()
{
    int number{};
    int max{};
    
    for(int i=1; i<=3; ++i){
    std::cout << "Enter three positive integer " << i << ":";
    std::cin >> number;
    if( i==1){
        max = number;
    }else{
        if(number > max){
            max = number;
        }
    }
}
        std::cout<< "the max number is :" << max << std::endl;
    return 0;
   
}