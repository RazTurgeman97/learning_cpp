#include <iostream>
#include <string>
#include <cstdint>

// hash signs (#) sybolize directives. (examples: #include, #define, #ifdef)
// the code is preprocessed prior to compiling.
// Directives tell the preprocessor what to add or remove in the code.
// the directives are useful for libraries, constants, selecting code blocks, etc.

// when angle brackets are used (<>) it means that the preprocessor will look for the file in a predfined location, usually specified by the development environment.
// for known or intalled libraries. these file usually don't require an extention like .h or .hpp
// header files originated in C library (and not C++) preceded by lowercase c for its name like <cstdint> header file.


#define CAPACITY 5000
#define DEBUG

// #define directive defines symblos to means whatever you type at the right.
// these symbols are called macros.
// you should be careful if you are defining something than a simple constant because it finds and replaces.
// for example for CAPACITY, everytime the preprocessor finds the symbol CAPACITY, it will replace it with 5000.


int main(){
    int32_t large = CAPACITY; // an integer type variable named large with bit lenght of 32 and _t for type.
    uint8_t small = 37;
#ifdef DEBUG // performed only if DEFINE macro is defined
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // Shorthand for "large = large + small;"
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
