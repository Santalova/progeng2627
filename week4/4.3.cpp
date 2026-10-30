#include <iostream>

int sfactor(int a){
    for(int i = 2; i < a; i++){
        if((a % i) == 0){
            return i;
        }
    }
    return 1;
}
int main(){
    int n;
    std::cin >> n;
    std::cout << sfactor(n);
}