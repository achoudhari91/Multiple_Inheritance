#include <iostream>
using namespace std;

// First Base Class
class Student
{
public:
    void showStudent()
    {
        cout << "Student Name: Ajit" << endl;
    }
};

// Second Base Class
class Marks 
{
public:
    void showMarks()
    {
        cout << "Marks: 88%" << endl;
    }
};

// Derived Class inheriting from both Student and Marks
class Result : public Student, public Marks 
{
public:
    void showResult() 
    {
        cout << "Result: Pass" << endl;
    }
};

int main() 
{
    // Create object of derived class
    Result r;

    // Access functions of both base classes
    r.showStudent();
    r.showMarks();

    // Access function of derived class
    r.showResult();

    return 0;
}
