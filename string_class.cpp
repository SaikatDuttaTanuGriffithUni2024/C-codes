#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string name1 = "Saikat" ;

    string name2 = " Dutta" ;

    string name3 = " Tanu" ;

    string name4;

    name4 = name1;

    cout << "Name4 = " << " "  << name4 << endl;

    int length = name1.size();

    cout << "Length of name1 is " << " " << length << endl;

    name4 = name1 + name2 + name3;

    cout << "Name4 is " << name4 << endl;

    getch();



}
