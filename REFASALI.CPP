#include<iostream.h>
#include<conio.h>
void main()
{
	int a=24;
	int &b=a;
	int &c=a;
	clrscr();
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	getch();
}