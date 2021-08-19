#include<iostream>
#include<conio.h>
using namespace std;

class Griffith
{
public:
    int admissionfee;

    int examfee;

    void display1()
    {
        cout << "Admission fee of Griffith University is " << " " << admissionfee << endl;

        cout << "Exam fee of Griffith University is " << " " << examfee << endl;
    }
};

class Student : public Griffith
{
public:

    int id;

    void display2()
    {
        cout << "Griffith id is " << " " << id << endl;

        display1();
    }
};

int main()
{
    Student s1;

    s1.admissionfee = 68000;
    s1.examfee = 2000;
    s1.id = 101;

    s1.display2();

    getch();
}


