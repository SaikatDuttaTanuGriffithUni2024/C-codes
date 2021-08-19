#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public :
        int id;
        double cgpa;
};

int main()
{
    Student Saikat, Susmita;

    Saikat.id = 1140122;

    Saikat.cgpa = 6.60;

    Susmita.id = 1140041;

    Susmita.cgpa = 6.53;

    cout << " Saikat's id = " << Saikat.id << endl;

    cout << " Saikat's cgpa = " << Saikat.cgpa << endl;

    cout << " Susmita's id = " << Susmita.id << endl;

    cout << " Susmita's cgpa = " << Susmita.cgpa << endl;

    getch();
}
