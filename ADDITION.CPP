// addition using class
#include <iostream.h>
#include <conio.h>
class add
{
  public:
  int a,b;
  void getdata() //function
{
  cout<<"Enter First Value :"<<endl;
  cin>>a;
  cout<<"Enter Second Value :"<<endl;
  cin>>b;
}
  void show()
  {
   cout<<"Addition is :"<<a+b<<endl;
  }
};
   void main()
   {
     clrscr();

     add i;
     i.getdata();
     i.show();

     getch();
   }

