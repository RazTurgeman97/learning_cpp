// Using Several Source Files, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h" // here we include the cow.h header file we have created.

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

