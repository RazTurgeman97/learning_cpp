// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1023;
    bool flag = false;
    char lttr = 'd';

    if (a > 1000) // If a block of code consists of exactly one line, there is no need for curly brackets. We may place them if we want, but they're not required.
        std::cout << "Warning: a is over 1000." << std::endl;

    if (a % 2) // as lonag as the result of (a % 2) has a value other than zero it means it returns 'True', if (a % 2) = 0 it returns false.
        std::cout << "a is odd" << std::endl;
    else // In other words: if (a % 2) == 0
        std::cout << "a is even" << std::endl;

    std::cout << "The letter " << lttr << " is "; // Here we want to report id a letter is a vowel or not
    if (lttr != 'a' && lttr != 'e' && lttr != 'i' && lttr != 'o' && lttr != 'u' && // lowercase vowels
        lttr != 'A' && lttr != 'E' && lttr != 'I' && lttr != 'O' && lttr != 'U') // uppercase vowels
        // Note that we used the logical 'and' operator "&&" (the bitwise 'and' operator is single ampersand "&")
        std::cout << "not "; // if the letter is not one of the letter above, type 'not'
    std::cout << "a vowel." << std::endl; // end of the sentnce.

    if (flag)
        std::cout << "The flag is true!" << std::endl;
    else
        std::cout << "The flag is false!" << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}