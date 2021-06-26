#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int num [ ] ={10,20,45,78,46,52};

    int n,i;

    cout << "Enter the value you want to search : " << endl;

    cin >> n;

    int position = -1;

    for(i=0;i<6;i++){

        if(n==num[i]){

            position = i+1;

            break;
        }

    }

    if(position==-1)

        cout << "Value is not found in the list!" << endl;
    else
        cout << "Value is found & it's position in the list is: " << position;

    getch();
}
