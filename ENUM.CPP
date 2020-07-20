#include<iostream.h>
#include<conio.h>
enum week{mon,tue,wed,thu,fri,sat,sun};
void main()
{
	week day;
	day=sun;
	clrscr();
	cout<<"Day: "<<day+1<<endl;
	getch();
}