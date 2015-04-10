#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

//http://codepad.org/dLgGvjag

class GradeBook
{
public:
     GradeBook(string name)
     {
          setCourseName(name);
     }

     void setCourseName (string name)
     {
          courseName = name;
     }

     string getCourseName()
     {
          return courseName;
     }

     void displayMessage()
     {
          cout << "Welcome to grade book for\n" << getCourseName()
               << "!" << endl;
     }
private:
     string courseName;
};

int main()
{
     int grade;
     cin >> grade;

     GradeBook gradeBook1("CS101 Introduction to C++ Programming");
     GradeBook gradeBook2("CS102 Data Structures in C++");

     cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
          << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
          << endl;
     return 0;
}