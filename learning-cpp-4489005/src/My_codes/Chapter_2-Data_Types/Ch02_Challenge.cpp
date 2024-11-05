// Challenge Chapter 2 - Data types

// The task is to calculate the avarage in an array of five integers - add the values together a devide by 5.
// Store your results in a *float* variable
// Print the avarage on the screen
// Strat with the code provided on Ch02_13

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337}; // array named 'nums' with provided 5 numbers
    float result; // the result variable is declared as a float type

    // Write your code here

    result = (nums[0] + nums[1] + nums[2] + nums[3] + nums[4])/5.0; // it appears that when deviding by 5 (and not 5.0) the result is an integer and only after the
    // calculation has been made it assigned to the float type variable 'result'.

    // End of my code


    // Instructor solution

    float result2; // the result variable is declared as a float type

    result2 = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    result2 /= 5;

    // On the instructor solution, the sum of the nums was assigned to the result before the devision. thus the sum asssigned as a float.

    // End of solution
    
    std::cout << "The average is " << result << std::endl;
    std::cout << "The average is " << result2 << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}