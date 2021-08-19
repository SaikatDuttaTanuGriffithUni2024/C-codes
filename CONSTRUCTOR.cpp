#include<iostream>
#include<conio.h>
using namespace std;

class Customer
{   public :

        int account_no;

        double amount;

        void display()
        {
            cout << "Customer's account no is : " << account_no << endl;

            cout << "Remaining balance is : " << amount << endl;
        }
        Customer (int x, double y)
        {
            account_no = x;

            amount = y;
        }

};

int main()
{
    Customer Saikat(340216,210000);

    Saikat.display();

    Customer Susmita(340223,10000);

    Susmita.display();

    getch();
}


