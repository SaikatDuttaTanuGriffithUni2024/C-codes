#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int number,i,count=0;

    cout << "Enter any positive number:" << endl;

    cin >> number;

    for (i=2; i<number; i++){
        if(number%i==0){
            count++;
            break;
        }
    }
        if(count==0){
            cout << number << " is a Prime Number!!" << endl;
        }
        else{
            cout << number << "is not a Prime Number!!" << endl;
        }

    getch();
}
