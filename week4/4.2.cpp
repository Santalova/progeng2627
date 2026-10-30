#include <iostream>

void mysort(double& s1, double& s2){
    double temp;
    if(s1 > s2){
        temp = s1;
        s1 = s2;
        s2 = temp;
    }
}
int main(){
    double a, b;
    std::cin >> a >> b;
    mysort(a,b);
    std::cout << a << " " << b;
}
