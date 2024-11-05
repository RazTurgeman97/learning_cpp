// Learning C++ 
// Exercise 06_02
// Opening a text file for writing, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){

    std::ofstream outFile; // declaration of an ofstream object named outFile

    float a = 4.333f, b = 5.302f; // arbitrary values

    outFile.open("calculations.txt"); // The open function may take a second argument to specify the mode of the file usage.
    // By default, it will allow us to write into the file, and if the file already exists, it will replace its contents.
    // There is also an append mode to continue writing into the file starting after its last character.
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        outFile << "a = " << a << std::endl;
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        // The insertion operator (<<)  takes care of converting those floats to strings before writing into the file.
        outFile.close();
        std::cout << "File written successfully!" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
