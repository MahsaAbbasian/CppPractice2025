#include <iostream>
int main(){
    int n {};
    std:: cout <<"Enter a positive numberto calculate the sum from 1 to n:";
    std:: cin >> n;

    int sum = 0;
    for(int i=1; i<=n; ++i){
         sum += i;
    }
    std:: cout<< " the sum is equal to " << sum << "/n";
    return 0;
}