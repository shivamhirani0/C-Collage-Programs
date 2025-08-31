// swap numbers
#include <iostream.h>
#include <conio.h>
    void main()
{
  int a,b,c;
  clrscr();
  cout<<"Enter Value A="<<endl;
  cin>>a;
  cout<<"Enter Value B="<<endl;
  cin>>b;

  c=a;
  a=b;
  b=c;

  cout<<"A="<<a<<endl;
  cout<<"B="<<b<<endl;

  getch();

}