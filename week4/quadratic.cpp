#include <iostream>
#include <cmath>

bool quadsolve(double a, double b, double c,double& x1,double& x2){
    bool real_sol = true;
    double delta = b*b - 4*a*c;
    if(delta < 0){
        real_sol = false;
    }
    else{
        x1 = (-b+std::sqrt(b*b - 4*a*c))/(2*a);
        x2 = (-b-std::sqrt(b*b - 4*a*c))/(2*a);
    }
    return real_sol;
}
int main(){
    double a,b,c,s1,s2;
    std::cin >> a >> b >> c;
    if(quadsolve(a,b,c,s1,s2)){
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else {
        std::cout << "no real solution";
    }

}