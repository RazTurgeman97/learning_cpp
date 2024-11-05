// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet}; // in this way dairy is 0, mear is 1, hide is 2 and pet is 3
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};
// if we use enum only (instead of enum class) we would get an error bacuse meat and dairy are used in both enumerations and has different numbers.

int main(){
    int meat = 8; // here, when asigning the int named 'meat' a value of 8 it will print 8 if we try print it we will not have an error
    // because the compiler assumes we ment to use the meat mention inside the main scope (instead of the one mentioned outside the the main function)

    cow_purpose a; // to use an enum class variable we need to declare the variable type as its class name

    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl; // here we need to cast the type of a to int because the insertion operator used in cout is not defined for apperance
    // of the cow_purpose type

    std::cout << std::endl << std::endl;
    return (0);
}