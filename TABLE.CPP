// Table
#include <iostream.h>
#include <conio.h>
   class table
{
   public:
   int a,i;
   void getdata()
   {
   cout<<"Enter Number: ";
   cin>>a;
   }

   void show()
   {
     int i;
     for(i=1;i<=10;i++)
     {
       cout<<a<<" X "<<i<<" = "<<a*i<<endl;
     }
   }
};

void main()
{
  clrscr();
  table t;
  t.getdata();
  t.show();

  getch();
}