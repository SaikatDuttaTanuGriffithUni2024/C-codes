#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    float mark;

    cout << "Enter the mark:" << endl;

    cin >> mark;

    if (mark > 100)
        cout << "Invalid Mark" << endl;
    else if (mark < 0)
        cout << "Invalid Mark" << endl;
    else if (mark >= 80)
        cout << "Obtained Grade: A+" << endl;
    else if (mark >= 70)
        cout << "Obtained Grade: A" << endl;
    else if (mark >= 60)
        cout << "Obtained Grade: A-" << endl;
    else if (mark >= 50)
        cout << "Obtained Grade: B" << endl;
    else if (mark >= 40)
        cout << "Obtained Grade: C" << endl;
    else if (mark >= 33)
        cout << "Obtained Grade: D" << endl;
    else{
        cout << "Fail!" << endl;
        cout << "Better luck next time!!";
    }
    getch();
}
