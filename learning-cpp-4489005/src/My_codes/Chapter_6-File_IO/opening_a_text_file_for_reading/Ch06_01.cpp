// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream> // file stream header

int main(){
    std::ifstream inFile; // declaration of ifstream object called inFile

    // Declarations for a string, an integer, and a char will be used to store values coming in from the file.
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt"); // open a file with the open memeber function of inFile

    if (inFile.fail()) // Check if the file read successfully
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){ // As long as the text cursor has not got to the end of the file (eof)

            getline(inFile, str); // getline defined in the string header.
            // It takes one line of text from the stream in the first argument and replaces the contents of the string in the second argument with the acquired text.
            std::cout << str << ", ";

            getline(inFile, str);
            number = stoi(str); // string to integer function simply returns the integer represented by the string.
            std::cout << number << ", ";

            getline(inFile, str);
            letter = str[0]; // Since we know the string will contain one letter, we can get that character by indexing the string.
            // because the square bracket operator is supported by the string class.
            std::cout << letter << std::endl;
        }
        inFile.close(); // It's important to clode the files we no linger need.
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
