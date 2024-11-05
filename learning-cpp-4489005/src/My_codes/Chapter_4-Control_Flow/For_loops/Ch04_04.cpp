// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    // For loops are traditionally used when you know the range to traverse in advance. The first and last iterations are normally specified in the loop statement.


    // First option:

    average = 0.0f; // initializing avarage variable to 0.0 float
    for (int i = 0; i < numbers.size(); i++) // the for loop syntax has three parts separated by semicolons.
    // First we have the initialization statement, then the condition, and lastly, the increment expression. 
        average += numbers[i]; // add the current element to the sum for later avarage calculation.
    average /= numbers.size(); // Devide the sum with the vector size = number of elements.
    std::cout << "Average: " << average << std::endl;


    // Second option:

    average = 0.0f;
    for (auto x : numbers) // for each x in numbers (the vector) do the following. used auto type for x (integer).
    // Now be warned that using a variable of the same type as the elements in a vector or array will copy the value of each element
    // into the variable for each iteration of the loop. So this is okay in this example where we have a vector of integers.
    // However, if we have a vector of large objects, we may want to use a reference instead.
        average += x;
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;
       
    std::cout << std::endl << std::endl;
    return (0);
}