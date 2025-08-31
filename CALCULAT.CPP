// calculator

#include <iostream.h>
#include <conio.h>

void main ()
{
     int a=0;
     int b=0;
     int c=0;

     clrscr();

     cout<<"enter first number :"<<endl;
     cin>>a;

     cout<<"enter second number :"<<endl;
     cin>>b;

     c=a+b;
     cout<<"sum is :"<<c<<endl;
     c=a-b;
     cout<<"sub is :"<<c<<endl;
     c=a*b;
     cout<<"mul is :"<<c<<endl;
     c=a/b;
     cout<<"div is :"<<c<<endl;

     getch();
}