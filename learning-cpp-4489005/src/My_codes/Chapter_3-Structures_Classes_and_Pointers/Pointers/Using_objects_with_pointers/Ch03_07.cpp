// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow; // declared a cow pointer named "my_cow". (instead of the original "cow my_cow" delared staticly in the memory)

    my_cow = new cow("Gertie", 3, cow_purpose::hide); // by replacing "cow my_cow" with "my_cow = new cow()" we now using dynamic memory by assigning to this pointer
    // the address of a dynamically allocated instance of the cow class.
    // The use of pointers is supported by the language to dynamically allocate memory for new objects when calling the class constructor,
    // and also to free their memory when you no longer need them.

    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    // Note that we used the pointer operator (->) instead of '.' because now my_cow is no longer an object, but a pointer to cow object.
    
    delete my_cow;
    // now we can delete and free the memory when wh finish using it. (the opposite of the new operator)
    
    std::cout << std::endl << std::endl;
    return (0);
}

// One of the most important applications of pointers is dynamic memory management. When you declare a variable, you are statically allocating memory for it.
// The compiler knows the space in memory that will be needed. However, most real applications create variables and objects in memory during runtime.
// This is known as dynamic memory management. In C, it is common to dynamically allocate memory using the malloc family of functions,
// which is short for memory allocation. You, as a programmer, are responsible of freeing up the memory you allocated in runtime to avoid memory leakage.
// But this is where C++ really shines. The use of pointers is supported by the language to dynamically allocate memory for new objects when calling the class
// constructor, and also to free their memory when you no longer need them.