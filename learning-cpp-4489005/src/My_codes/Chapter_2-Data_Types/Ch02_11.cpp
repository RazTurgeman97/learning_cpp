#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32); // initially, we used (5/9) and got zero because it was a integer.
    // we had to change at least one of the number to a float type so the division will not result 0 output.
    // we can use casting as we did with number 5, and we also can add a '.0' as we did with number 9 (double type)

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl; // in this way we expect to (10.99 - 0.99) * 10000 = 9900 but it shown as 9899
    // why? we are using floating point numbers which has a small approximation error - a limitation of a floating point representaiton.
    // if we use doubles instead we would get a better approximation.

    double dweight = 10.99;
    std::cout << "Fractional part (fixed approximation error with double type): " << (int)((dweight - (int)weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}