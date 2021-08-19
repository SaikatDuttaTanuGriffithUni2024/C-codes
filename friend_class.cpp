#include<iostream>
#include<conio.h>
using namespace std;

class Saikat
{
private:
    int id = 101;
    string name = "Saikat dutta Tanu";

public:
    friend class Susmita;

};

class Susmita
{
public:
        void display(Saikat s)
    {
        cout << s.id << endl;

        cout << s.name << endl;
    }
};

int main()
{
    Saikat s1;
    Susmita s2;

    s2.display(s1);
    getch();
}
