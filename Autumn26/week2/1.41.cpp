#include <iostream>


int main(){
    int n, rem;
    std::cout << "please enter a number:";
    std::cin >> n;
    rem = n % 2;
    if (rem == 0){
        std::cout << "The number is even";
    }
    else {
        std::cout <<"The number is odd";
    }
}