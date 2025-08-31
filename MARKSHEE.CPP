//marksheet
#include <iostream.h>
#include <conio.h>
	 void main ()
{
     int No,s1,s2,s3,s4,s5,s6,s7,Total,Per;

     clrscr();

     cout<<"No is :"<<endl;
     cin>>No;

     cout<<"Subject 1 Mark :"<<endl;
     cin>>s1;

     cout<<"Subject 2 Mark :"<<endl;
     cin>>s2;

     cout<<"Subject 3 Mark :"<<endl;
     cin>>s3;

     cout<<"Subject 4 Mark :"<<endl;
     cin>>s4;

     cout<<"Subject 5 Mark :"<<endl;
     cin>>s5;

     cout<<"Subject 6 Mark :"<<endl;
     cin>>s6;

     cout<<"Subject 7 Mark :"<<endl;
     cin>>s7;

     Total=s1+s2+s3+s4+s5+s6+s7;
     cout<<"Total is :"<<Total<<endl;

     Per=Total/7;
     cout<<"Percentage is :"<<Per<<endl;

     if (Per>80 && Per>90)
     {
     cout<<"A Grade"<<endl;
     }

     else if (Per>70)
     {
     cout<<"B Grade"<<endl;
     }

     else if (Per>60)
     {
     cout<<"C Grade"<<endl;
     }

     else if (Per>50)
     {
     cout<<"D Grade"<<endl;
     }

     else if (Per>40)
     {
     cout<<"E Grade"<<endl;
     }

     else
     {
     cout<<"Fail"<<endl;
     }

     getch();
}



