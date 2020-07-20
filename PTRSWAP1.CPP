#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q;
	clrscr();
	cout<<"Enter 2 no.s:"<<endl;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	p=&a;
	q=&b;
	cout<<"values before swapping:"<<endl;
	cout<<"a=*p="<<*p<<endl;
	cout<<"b=*q="<<*q<<endl;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	cout<<"values after swapping:"<<endl;
	cout<<"a=*p="<<*p<<endl;
	cout<<"b=*q="<<*q<<endl;
	getch();
}