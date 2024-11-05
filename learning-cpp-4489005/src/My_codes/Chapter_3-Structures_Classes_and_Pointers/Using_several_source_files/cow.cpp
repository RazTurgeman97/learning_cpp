#include "cow.h" // instead of creating the class inside our code, we created a header file containing the class.
// we write it with quotes because cow.h is not part of the standard library.

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name() const{
    return name;
}
int cow::get_age() const{
    return age;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}

// Note that we fixed the scope of all members using "cow::" before the name of each functions
