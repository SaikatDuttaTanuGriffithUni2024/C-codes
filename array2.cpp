#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int marks[8];

    for(int i=0;i<=8;i++){

        cout << " Enter the marks of the student" <<i+1 << " : ";

        cin >> marks[i];
    }

    for (int i=0; i<=8; i++){

        cout << "Marks of the students are:"<< " " << marks[i] << endl;

    }
    getch();
}
