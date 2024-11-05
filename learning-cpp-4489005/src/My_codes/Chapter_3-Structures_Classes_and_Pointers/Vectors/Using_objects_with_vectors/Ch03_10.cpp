// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle; // A cow type vector named "cattle".
    
    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));
    // Vector has two ends: front emd and a back end.
    // We may only insert elements thruogh the back end. The reason for this is because vectors are guaranteed to store elements consecutively in memory.
    // So inserting at the front end would always require reallocation.

    // Vectors support iterators, which are special objects that allow you to traverse containers. They work with similar semantics as pointers.
    // In fact, pointers are a type of iterator.

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    // To access the first element in a vector, we can use the begin function, which returns an iterator to the first element.

    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    // accessing bt index.

    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;
    // Here we can use prev function with argument '2' for 2 previous indices from the end.

    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl;
    // To access the last element, we can use the end function, but this one returns an iterator to the element after the last element.
    // So we need to decrease this iterator by one. For this, we can simply subtract one to the functions return value, or we can use a special function called prev,
    // as in previous, which guarantees going back a number of positions in the container. (liked we used on "next to the last")
    
    std::cout << std::endl << std::endl;
    return (0);
}