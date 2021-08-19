#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    try{

        int num1, num2;

        cout << "Enter the 1st number: " << endl;

        cin >> num1;

        cout << "Enter the 2nd number : " << endl;

        cin >> num2;

        if(num2 == 0)
        {
            throw 0;
        }

        double result = (double) num1 / num2;

        cout << "Result is : " << result << endl;

    }

    catch(...)
        {
            cout << "Divide by zero is not possible!" << endl;
            cout <<"Please try again!" << endl;
        }
}
