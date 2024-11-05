// Your task is to create three classes, student, course, and grade. With these classes, we'll be able to model students taking courses and getting grades.
// The student class must have two members, an integer for the student's ID and a string for the name. The course class must have an integer for the course ID,
// a string for the name and an eight bit integer for the credits. And the grade class must have an integer for the student ID, an integer for the course ID,
// and a chart for the grade as an ASCII character. We'll only use uppercase A, B, C, D, and F for the grades, no plus or minus.
// For these classes, your task is to write the constructors and gather function implementations.
// Class definitions are porvided in records.h. You'll have to write the function implementations in records.cpp.

#include "records.h"

// Student: //

Student::Student(int the_id, std::string the_name){
    id = the_id;
    name = the_name;
}

// Getters:

int Student::get_id() const{
    return id;
}

std::string Student::get_name() const{
    return name;
}


// Course: //

Course::Course(int the_id, std::string the_name, unsigned char the_credits){
    id = the_id;
    name = the_name;
    credits = the_credits;
}

// Getters:

int Course::get_id() const{
    return id;
}

std::string Course::get_name() const{
    return name;
}

int Course::get_credits() const{
    return credits;
}


// Grade: //

Grade::Grade(int sid, int cid, char grd){
    student_id = sid;
    course_id = cid;
    grade = grd;
}

// Getters:

int Grade::get_student_id() const{
    return student_id;
}

int Grade::get_course_id() const{
    return course_id;
}

char Grade::get_grade() const{
    return grade;
}

