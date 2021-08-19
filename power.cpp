#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int n, p;

    cout << "Enter the number : " << endl;
    cin >> n;

    cout << "Enter the power : " << endl;
    cin >> p;

    int result =  pow(n,p);

    cout << "Result is : " << result << endl;

    if(result % 2 == 0){

        cout << "Result is even!";
    }
    else{

        cout << "Result is odd!";
    }

    getch();
}
