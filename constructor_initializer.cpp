#include<iostream>
#include<conio.h>
using namespace std;

class Griffith
{
public:
    const int admissionfee;
    const int examfee;

    Griffith(int x, int y)

    : admissionfee(x), examfee(y)
    {
        cout << "Admission fee is  " << " " <<  admissionfee << endl;

        cout << "Examination fee is " << " " << examfee << endl;
    }
};

int main()
{
    Griffith saikat(68000,2000 );

    getch();


}
