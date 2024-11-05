// Calculate a GPA, by Eduardo Corpeño 

// Your task is to calculate the grade point average, or GPA, for a student. You'll retrieve the data from a vector of grades, and you'll print the GPA on the screen.
//  As a part of calculating the points, we'll use this table to convert letter grades to points.
// A is worth four points, B, three points, C, two points, D, one point, and zero points for an F.
// notice that line 31 (student_str = students[0].get_name();) is just a placeholder that gets the name of the first student in the student's vector.
// So please replace that line with the correct code to get the name of the selected student into the student SDR string. 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    // A vector named "students" containing two Student constructor calls
    std::vector<Student> students = {Student(1, "George P. Burdell"), // student id, student name.
                                    Student(2, "Nancy Rhodes")};

    // A vector named "courses" containing four Course constructor calls
    std::vector<Course> courses = {Course(1, "Algebra", 5), // course id, course name, course credits.
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    // A vector named "grades" containing two Course constructor calls
    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'), // srudent id, course id, grade.
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush; // we expect 1 or 2 because we have only twp student in the vector.
    std::cin >> id;

    // Calculate the GPA for the selected student.

    // Write your code here //

    float points = 0.0f, credits = 0.0f; // initialize float type variables for the points and credits.

    for (Grade& grd : grades) // A for loop for all elements in the grades vector.
     //  The current element will be in the grd reference (its type is 'Grade&' which means that grd is grd is a reference to the current element).
     // This is done to avoid copying every element to grd as the loop progresses because objects tend to have a lot of data in them,
     // and making a copy is definitely not what we need right now. We just need to traverse the vector. (we could also do this with a pointer)

     // References to objects like grd use the same syntax as the actual objects, so we may treat grd as the current element of the grades vector in the loop.

        if (grd.get_student_id() == id){ // this is the only part of the for loop body, that is why we didnt use curly brackets for the for loop.
         // Since the grades vector contains grades for every student, we will only consider the grades for the selected student in the id variable.

            float num_grd; // float for a numeric grade

            switch (grd.get_grade()){ // there are four cases for the grade, therefore we will use switch statements.
             // each grade needs to be converted to its number equivalent. num_grd holds the numeric grade for each letter.
                case 'A': num_grd = 4.0f;
                    break;
                case 'B': num_grd = 3.0f;
                    break;
                case 'C': num_grd = 2.0f;
                    break;
                case 'D': num_grd = 1.0f;
                    break;
                default: num_grd = 0.0f;
                    break;
            };

            int j = 0; // index for the while loop.
            while (j < courses.size() && courses[j].get_id() !=grd.get_course_id())
             // the first thing the condition checks is that j isn't equal to the size of the courses vector.
             // Because the next part of the condition wouldn't be safe if the first condition isn't met.
             // In the second part of the condition, we check if the id of the course at index j is not the course for the grade we are currently looking at.
             // Because the body of the loop is a simple increment of j. So what it does is traverse the course vector until it finds the course for the current grade.
                j++; // Continue looking for the correct one.
             // Once the while loop is done, j will have the index of the course we are interested in.
            
            // Now when j has the index of the course we are interested in we can calcuulate the credits and the points. 
            credits += courses[j].get_credits();
            points += num_grd * courses[j].get_credits();
        }
        else{ // Added error message when user enters an un avalible student id number.
            std::cout << "Error: There is no such student." << std::endl << "There are only " << students.size() << " students.";

            std::cout << std::endl << std::endl;
            return(0);
        }

        GPA = points / credits;

    // End of my code //

    std::string student_str;
    int i = 0;
    while(i < students.size() && students[i].get_id() != id)
        i++; // Continue looking for the correct one.
    student_str = students[i].get_name(); // Changed this from [0] to [i] and added the while loop.

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
