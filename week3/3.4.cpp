#include <iostream>
int main(){
    int n, max, min;
    std::cout << "enter a number";
    std::cin >> n;
    max = n;
    min = n;
    std::cout << max << " " << min << std::endl;
    while (n != 0){
        std::cout << "enter a number";
        std::cin >> n;
        if(n > max){
            max = n;
        }
        if(n < min){
            min = n;
        }
        std::cout << max << " " << min << std::endl;
    }
}