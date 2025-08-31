// 1 to 10 using do while
#include <iostream.h>
#include <conio.h>
   class ten
{
      public:
      int i;

      void show ()
      {
       i=1;
       do
       {
	  cout<<"jai shree Ram ";
	  i=i+1;
       }
	  while (i<=1000);
       }
};
void main()
{
   clrscr();

   ten p;
   p.show();

   getch();
}           1