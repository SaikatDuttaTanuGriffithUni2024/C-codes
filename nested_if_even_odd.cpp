#include<iostream>
#include<conio.h>
using namespace std;

main()

{

    int number;

    cout << "Enter the number:\t" <<endl;

    cin >> number;

    if (number !=0){
        if (number%2==0){
            cout << "This number is Even!";
        }
        else{
            cout << "This bumber is Odd!";
        }
    }
    else
        cout << "This number is zero and neither Even nor Odd!";
    getch();
}
