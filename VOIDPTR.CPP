#include<iostream.h>
#include<conio.h>
void main()
{
	void *ptr,*ptr1,*ptr2;
	int a=5;
	float f=24.11;
	char c='S';
	clrscr();
	ptr=&a;
	ptr1=&f;
	ptr2=&c;
	cout<<"Value of a="<<a<<endl;
	cout<<"Value of &a="<<&a<<endl;
	cout<<"Value of ptr="<<ptr<<endl;
	cout<<"Value of f="<<f<<endl;
	cout<<"Value of &f="<<&f<<endl;
	cout<<"Value of ptr1="<<ptr1<<endl;
	cout<<"Value of c="<<c<<endl;
	cout<<"Value of &c="<<&c<<endl;
	cout<<"Value of ptr2="<<ptr2<<endl;
	getch();
}