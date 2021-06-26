#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int A[2][3], row, col;

    cout << "Enter the elements of the array: " << endl;

    for(row=0; row<2; row++)
    {
        for(col=0; col<3; col++)
        {
            cout << "A["<<row<<"]["<<col<<"] = " ;

            cin >> A[row][col];

        }

    }

    for(row=0; row<2; row++){

        for(col=0; col<3; col++){

            cout << A[row][col] << " ";
        }

        cout << endl;
    }
}
