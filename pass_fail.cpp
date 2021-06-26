#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    float marks ;

    cout << "Enter the mark of a student:" << endl;

    cin >> marks;

    if (marks >= 35)
        cout << "The student has passed";
    else
        cout << "The student has failed";


    getch();
}
