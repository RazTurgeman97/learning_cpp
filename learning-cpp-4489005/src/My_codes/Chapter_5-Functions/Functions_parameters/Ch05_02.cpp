// Function Parameters, by Eduardo Corpeño 

#include <iostream>

// Takes arguments by value //

int square(int x){
    x = x * x; // No problem modifying the value of x
    return x;
}

// Takes arguments by address //

void swap(int *x, int *y){ // The function doesn't return anything and uses two *pointers* to integers as parameters, X and Y. 
    int temp = *x; // temp will get the value of the integer where x is pointing
    *x = *y; // where x is pointing, we will assign the value of the variable where y is pointing,
    *y = temp; // where y is pointing we will get temp.
}

// Takes arguments by reference //

void swap(int& x, int& y){ // The parameters are also be called x and y but notice the ampersand at the end of their type - references.
    int temp = x;
    x = y;
    y = temp;
    // references are aliases, so they are treated as the variables themselves.
}

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); // a and b must by past as *addresses*
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}