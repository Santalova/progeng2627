#include <iostream>
#include <string>

int main(){
    std::string first_name;
    std::string surname;
    std::cout << "what is your first name?" << std::endl ;
    std::cin >> first_name;
    std::cout << "what is your surname" << std::endl;
    std::cin >> surname;
    std::cout << "Your name is " << first_name << " " << surname; 
}