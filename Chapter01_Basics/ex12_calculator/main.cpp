#include <iostream>
int main()
{
    double number1{};
    double number2{};
    char opration{};
    double result{};

    std::cout << "Enter 2 numbers separated by space: ";
    std::cin >> number1 >> number2;

    while(true){
    std::cout << "Enter the opration (+ - * /): ";
    std::cin>> opration;
    if(opration == '+' || opration == '-' || opration == '*'  || opration == '/'){
    break;
    }
        std::cout<<"invalid opration or out of range! try again"<<std::endl;
    }
if(opration == '+'){
    result = number1 + number2;
    std::cout<<"the result is:" << result << std::endl; 
}else if(opration == '-'){
    result = number1 - number2;
    std::cout<<"the result is:" << result << std::endl; 
}else if(opration == '*'){
    result = number1 * number2;
    std::cout<<"the result is:" << result << std::endl; 
}else if(opration == '/'){
    if(number2 == 0){
        std:: cout<< "Error: Division by zero!" << std::endl;
        return 0;
    }
    result = number1 / number2;
    std::cout<<"the result is:" << result << std::endl; 
}else{
    std::cout<<"Entered an invalid opration! try again" << std::endl;
    
}
return 0;
}