#include <iostream.h>
#include <conio.h>
     class pyramid
{
    public:
    int i,j,k;

    void show()
    {
     for(i=1;i<=5;i++)
     {
      for(k=1;k<=i;k++)
      {
	cout<<" ";
      }
      for(j=5;j>=i;j--)
      {
       cout<<"* ";
      }
      cout<<endl;
      }
    }
};
void main()
{
  clrscr();
  pyramid p;
  p.show();
  getch();
}
