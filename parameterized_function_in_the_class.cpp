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

        void setValue(int x, double y)
        {

            id = x;

            cgpa = y;
        }
};

int main()
{
    Student Saikat, Susmita;

    Saikat.setValue(1140122,6.60);

    Saikat.display();

    Susmita.setValue(1140041,6.53);

    Susmita.display();



    getch();
}

