#include<iostream.h>
#include<conio.h>
void func()
{
	static int i=0;
	int j=0;
	i++;
	j++;
	cout<<"i="<<i<<" j="<<j<<endl;
}
void main()
{
	clrscr();
	func();
	func();
	func();
	getch();
}