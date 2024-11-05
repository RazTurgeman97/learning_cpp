// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes; // an int type vector named "primes".

    std::cout << "The vector has " << primes.size() << " elements." << std::endl; // Here we expect 0.

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    std::cout << "The vector has " << primes.size() << " elements." << std::endl; // Here we expect 5.
    std::cout << "The element at index 2 is " << primes[2] << std::endl; // Here we expect 5 as its the third element (index 2)
    primes[2] = 13;
    std::cout << "The element at index 2 is " << primes[2] << std::endl; // Here we expect 13 as it replaced 5.

    std::cout << std::endl << std::endl;
    return (0);
}