#include<iostream>
#include<conio.h>
using namespace std;


class MobileUser
{
public:
    void call()
    {
        cout << "Hello! " << endl;
    }
     virtual void sendMessage() = 0;

};

class Saikat : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "This is Saikat!" << endl;
    }
};

class Susmita : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "This is Susmita!" << endl;
    }
};

int main()
{
    MobileUser *m;

    Saikat s;

    Susmita d;

    m = &s;
    m->call();

    m = &d;
    m->sendMessage();

    getch();

}

