//maximum
#include <iostream.h>
#include <conio.h>
    void main ()
{
    int a,b,c;
    clrscr();

    cout<<"Enter First Number :"<<endl;
    cin>>a;
    cout<<"Enter Second Number :"<<endl;
    cin>>b;
    cout<<"Enter Third Number :"<<endl;
    cin>>c;


    if (a>b && a>c)
    {
    cout<<"A is Grater than B or C"<<endl;
    }

    else if (b>a && b>c)
    {
    cout<<"B is Grater than A or C"<<endl;
    }

    else
    {
    cout<<"C is Grater than A or B"<<endl;
    }

    getch();
}