#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string name;

    ofstream file;

    file.open("Saikat.txt",ios::out|ios::app);

    cout << "Enter the name: " << endl;

    getline(cin,name);

    file << "Welcome " << name << endl;

    file.close();

    getch();
}



