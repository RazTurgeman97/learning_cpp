// Switch Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    // A switch is a branching statement that allows your program to take one of several paths based on the value of a variable.
    // It's like an if-else statement, but with any number of outcomes, not just two.
    switch (operation){
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            result = operand_1 / operand_2;
            break;
        default: // Switches also allow you to specify a default case for any value not specified above.
            result = operand_1 + operand_2;
            break;
    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}