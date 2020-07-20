#include<iostream.h>
#include<conio.h>
void main()
{
	void *ptr;
	int a=5,*ptr1;
	clrscr();
	ptr=&a;
	ptr1=(int *)ptr;
	cout<<"value of *ptr1: "<<*ptr1;
	getch();
}