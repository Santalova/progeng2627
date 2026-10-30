#include <iostream>
int main(){
    int n, counter = 1;
    std::cin >> n;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            std::cout << counter << "\t";
            counter++;
        }
        std::cout << std::endl;
    }
    
}