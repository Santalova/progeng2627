#include <iostream>

double myabs(double in);

int main(){
    double n;
    std::cin >> n;
    std::cout << myabs(n) << std::endl;
    std::cout << n;
}

double myabs(double in){
    if(in < 0){
        in = -in;
    }
    return in;
}