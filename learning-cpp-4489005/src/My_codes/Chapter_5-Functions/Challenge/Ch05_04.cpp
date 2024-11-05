// Create a Report Card Function, by Eduardo Corpeño

// This time your task is to create a function in the StudentRecords class.
// You'll work with the code as we left it. The function must receive a student's ID as an integer and it must print out a report card on the screen.
// This report card must include the name of the student, the course names, the letter grades, and the GPA.

#include <iostream>
#include <vector>
#include "records.h"

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id); // Function to be written on the Challenge.
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
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
