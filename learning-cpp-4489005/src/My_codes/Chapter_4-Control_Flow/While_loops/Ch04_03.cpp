// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){

    // First option:
    
    std::vector<int> numbers = {12, 25, 31, 47, 58}; // Declaration of avector named numbers.
    auto ptr = numbers.begin(); // iterator declaration and initialization. will be used to traverse the vector.
    // initizalizing it with "numbers.begin()" makes it an iterator pointing to the first element of the vector.
    // instead of using a type name as complicated as "srd::vector<int>::iterator", we used auto instead.
    
    while (ptr != numbers.end()){ // as long as the condotion, the pointer ptr element is not equal to element past the last element in the vector), is true
        std::cout << *ptr << " "; // print the element ptr is currently pointing to, followed bt a space.
        ptr = next(ptr, 1); // move the iterator forward by one position by using the function "next".
    }
    std::cout << std::endl;


    // Second option:

    int i = 0;
    do{ // do while, runs the first iteration and evaluates the condition at the end of the loop body. 
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size()); // as long as the index is less than the vector size (5) continue "do"
    std::cout << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}