#include<iostream>
#include<conio.h>
using namespace std;

class Griffith
{
private:
    string name;
public:
    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        return name;
    }

};
int main()
{
    Griffith student;
    student.setName("saikat");
    cout << student.getName() << endl;
    getch();

}
