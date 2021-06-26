#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int marks[5];

    for(int i=0; i<=4; i++ ){

        cout << "Enter the marks of the student " << i+1 <<":" << endl;

        cin >> marks[i];

    }

    for(int i=0; i<=4; i++){

        cout << "Marks of the student" << i+1 <<": " << marks[i]<< endl;
    }
}
