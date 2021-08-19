#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public :
        int id;
        double cgpa;

        void display()
        {
            cout << id << " " << cgpa << endl;
        }
};

int main()
{
    Student Saikat, Susmita;

    Saikat.id = 1140122;

    Saikat.cgpa = 6.60;

    Saikat.display();

    Susmita.id = 1140041;

    Susmita.cgpa = 6.53;

    Susmita.display();



    getch();
}

