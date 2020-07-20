#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main(int n,char *argv[])
{
	int a,b;
	float at,ar,ac,as;
	clrscr();
	a=atoi(argv[1]);
	b=atoi(argv[2]);

	at=0.5*a*b;
	cout<<"Area of triangle: "<<at<<endl;

	ar=a*b;
	cout<<"Area of rectangle is: "<<ar<<endl;

	ac=3.14*a*a;
	cout<<"Area of circle is: "<<ac<<endl;

	as=a*a;
	cout<<"Area of square is: "<<as<<endl;

	getch();
}