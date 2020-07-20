#include<stdlib.h>
#include<iostream.h>
#include<conio.h>

void main(int n,char *argv[])
{
	int a,b,c;
	clrscr();
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=a+b;
	cout<<"Addition is: "<<c;
	getch();
}