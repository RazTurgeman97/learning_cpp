#include <iostream>
#include <string>
// For getting string fronm the user we will need to include the string header file from the strandard library

int main(){
    
    std::string str;
    // here we declare a string variable named "str" which we will use to store the user's input in.

    std::cout << "Please enter your name: " << std::flush;
    // std:flush makes sure that the output is completelt sent to the terminal before waiting for the user input.

    std::cin >> str;
    // Here we use the c-in object (used in the oposite direction as cout: >> - right bound insertion operator)
    // c-in works for SINGLE WORDS ONLY.
    // For strings that containts spaces we will need to use a dedicated function we will learn later.
    std::cout << std::endl;

    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return(0);
}