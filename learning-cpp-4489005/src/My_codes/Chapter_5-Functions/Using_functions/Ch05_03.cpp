// Using Functions, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

void initialize(StudentRecords&); // Declared the function with parameter type before main so it could be use on main.
// The implementation will be added after the main funciton.

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR); // calling the initialize function with SR (StudentRecords) argument.

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    std::string student_str = SR.get_student_name(id);
    std::cout << "The GPA for " << student_str << " is " << SR.get_GPA(id) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){ // On the implementation we name the parameters as well. here its "srec" (studentrecords).
    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A'); 
    srec.add_grade(2, 2, 'A');
    srec.add_grade(2, 4, 'B');
}
