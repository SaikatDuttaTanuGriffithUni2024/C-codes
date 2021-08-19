#include<iostream>
#include<conio.h>
using namespace std;

class Griffith
{
public:
    string name;

    Griffith(string name)
    {
        this -> name = name;
    }

    void display()
    {
        cout << "Student's name is : " << " " << name << endl;
    }
};
int main()
{
    Griffith s1("Suparna");

    s1.display();

    getch();
}
