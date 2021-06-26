#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    float marks[5];

    float sum=0,average=0;

    int i;

    for(int i=0; i<=4; i++){

        cout << "Enter the number of student" << i+1 << ": "<< endl;

        cin >> marks[i];
    }

    for(int i=0; i<5; i++){

        cout << "Marks of student " << i+1 << ": " << marks[i] << endl;
    }

    for (int i=0; i<5; i++){

        sum = sum + marks[i];


    }

    average = sum / 5;

    cout << "Sum of the students marks is :" << sum << endl;

    cout << "Average of the students marks is :" << average << endl;



    int max = marks[0];

    int min = marks[0];

    if (max < marks[i]){

        max = marks[i];
    }

    if (min > marks[i]){

        min = marks[i];
    }


    cout << "Highest Mark is :" << max << endl;

    cout << "Lowest Mark is :" << min << endl;

    getch();

}
