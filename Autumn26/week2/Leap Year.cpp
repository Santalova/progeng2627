#include <iostream>

int main(){
    int n;
    std::cout << "enter a year:";
    std::cin >> n;
    if (n % 4 == 0){
        if (n % 100 == 0){
            if(n % 400 == 0){
                std::cout << "Its a leap year";
            }
        }
    }
    else{
        std::cout << "Its a leap year";
    }
}