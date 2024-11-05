#pragma once // using this syntax will include this header file only once.
// It is very common to include the same header file in multiple source files. So this pragma directive prevents an error where the compiler
// finds definitions it has seen before in the same file. (avalible only on VS code)

#ifndef COW_H // an alternative for other compilers -  include guard: if the COW_H marco is not deifned, then include the following code.
#define COW_H
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{ // without the impelentations of the members functions (will be written on the cow.cpp file), only declerations.
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif // COW_H
