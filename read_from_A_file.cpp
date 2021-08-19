#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string line;

    ifstream file("Australia.txt");

    while(getline(file,line))
    {
        cout << line << endl;
    }
    file.close();

}
