// 1 to 10 using while
#include <iostream.h>
#include <conio.h>
  class ten
{
      public:
      int i; //data member

      void show() //function
      {
	i=1;
	while (i<=10)
	{
	  cout<<i<<endl;
	  i=i+1; // OR i++
	}
      }
};

void main()
{
  clrscr();

  ten p;    //object
  p.show(); //function

  getch();
}

