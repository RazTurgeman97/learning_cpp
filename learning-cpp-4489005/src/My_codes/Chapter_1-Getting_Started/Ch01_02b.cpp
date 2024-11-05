#include <iostream>

int main(){
    std::cout << "Hi There!" << std::endl;
    //c-out: character output. an object from the IO stream file (#include <io-stream>) which is a member of the standart library denoted by STD.
    // this membership represented by the scope resolution  operator - doube colon (::)
    // cour represents the output window and we must send some text to it. by using (<< "text") the << called left bound insertion operator.
    //we close the test with std::endl whoile end-l is end line.
    //most of the lines are closed with semi-colomn (;)
    

    std::cout << std::endl << std::endl;
    // By using two endl before exiting the program the output will be more readable because it will seperate the printed lines and the exit message.

    return(0);
    // the main function resturn an integer (int main). traditionally we use return(0); because 0 means the program exited with no errors.
}