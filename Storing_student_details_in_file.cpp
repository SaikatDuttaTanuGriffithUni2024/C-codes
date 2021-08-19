#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string name;

    int age;

    ofstream file;

    file.open("Student_details.txt",ios::out|ios::app);

for(int i=1 ; i<=3; i++)

    {
    cout << "Enter your name: " << endl;

    getline(cin,name);

    file << "Hello " << name;

    cout << "Enter your age: " << endl;

    cin >> age ;

    file << "\nAge is : " << age;

    cin.ignore();
    }

}
