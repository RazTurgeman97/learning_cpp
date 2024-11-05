// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
 // class members are private by default. so for the main the recognize them we need to use 'public:'
 // we make the functions public so they could me accessed from main

 // functions must first specify their return type, then the name of the function, and then a list of parameters between parentheses.
 // the body of the function is a code block so it's enclposed with curly brackets.

    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
        // i for initializer
    }

    // Here we used a very special public member - constructor.
    // The constructor of a class is called when an object is created. An implicit constructor is always implemented, which simply creates the object, allocating memory
    // for data members. However, you can always write additional versions of the constructor by taking a custom set of parameters. This is known as overloading
    // a function, and it means defining a function with the same name of an already defined function, but with a different set of parameters. A classic constructor
    // overload receives initialization values for all the data members.
    // A constructor is the only kind of function that does not specify a return type, and its name must be the same as the name of the class.
    // The body of the constructor should contain the initialization code you want for your new object. In our case, it's simply assigning the values to the members.

    // Getters:

    std::string get_name() const{ // this function returns a strung and called 'get_name'
    
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
     // Getter functions are not supposed to modify anything in the object they get data from so it us considered a good programing practice to declare those with
     // const qualifier after the parameter list. this way, the compiler will prevent the programmer from modifying the objects inside the function.


    // Setters:

    void set_age(int new_age){
        age = new_age;
    }

    void set_name(std::string new_name){
        name = new_name;
    }

    void set_cow_purpose(cow_purpose new_cow_purpose){
        purpose = new_cow_purpose;
    }

private: // to hide the data from the outside world, we can make all members as private using 'private:' it always recomended to keep the data private as much as possible
    std::string name;
    int age;
    cow_purpose purpose;
};
// The purpose of having private members is not to make them unavailable to the outside, but simply to restrict their access to code within the class.
// If you write a class with elements that are correlated, you don't want the user to tweak the data freely, possibly breaking something.
// It's best to have a function written by you, the author of the class, to perform operations that affect the data.


// when we assign values we are writing into the data members, and when we print theit values we are reading them.
// classes can have member of two types: data and functions. so a typical means of accessing the data is by defining member functions called setters and getters.
// Setters write into data members and Getters return their values.

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet); // calling the contructor with desired arguments
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    // we add 'get_' prefix and empty list of arguments to use the getters instead of trying to use the members directrly
    
    std::cout << std::endl << std::endl;
    return (0);
}
