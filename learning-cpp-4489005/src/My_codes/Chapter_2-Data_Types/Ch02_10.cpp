#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt; // here we expect to get -7 because sgn is a signed integer type (without floating point)
    unsgn = sgn; // here we expect to the 32-bit version of the 2's complement of 7 (2^32 - 7 = 4294967289)

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << (int32_t) unsgn << std::endl; // when using '(int32_t)' is casting the variable to a 32-bit integer (therefore -7)
    
    std::cout << std::endl << std::endl;
    return (0);
}
