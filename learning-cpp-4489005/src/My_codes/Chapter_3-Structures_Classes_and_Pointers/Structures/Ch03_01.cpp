// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

// we created a structure (struc type) named cow.
// structure containes 3 elements: string type "name", int type "age" and cow_purpose enum class type "purpose".

int main(){
    cow my_cow;
    // in the main function we create a cow stucture type variable named "my_cow"
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    // we assign values to the stucture type named "cow" by using its variable name (my_cow), dot, and the field we wish to assign to.

    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}