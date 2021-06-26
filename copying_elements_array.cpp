#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int array1[30],array2[30],n,i;

    cout << "Expected Numbers to be Inserted in Array 1: " << endl;

    cin >> n ;

    for(i=0;i<n;i++){

        cin >> array1[i];
    }

    cout << "Array 1:";
    for(i=0;i<n;i++){

        cout << " " << array1[i] ;
    }

    cout << endl;



    //copying from array1 to array2

    for(i=0;i<n;i++){

        array2[i] = array1[i];
    }

    cout << "Array 2:" ;

    for(i=0;i<n;i++)
    {
        cout <<" " << array2[i];
    }

    getch();
}
