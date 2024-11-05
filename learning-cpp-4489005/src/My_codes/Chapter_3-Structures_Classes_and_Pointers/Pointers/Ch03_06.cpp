// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37; // variable named 'a' with assign value of 37.
    int *ptr; // pointer variable named ptr, using the '*' sign as a prefix to the pointer name. will store the desired variable address.

    ptr = &a; // assigning to 'a' variable's address to the poonter named ptr, using '&' as a prefix to the name of the desired variable address.

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}