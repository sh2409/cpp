#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q,temp;
	clrscr();
	cout<<"Enter 2 no.s:"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	p=&a;
	q=&b;
	cout<<"vales before swapping:"<<endl;
	cout<<"a=*p="<<*p<<endl;
	cout<<"b=*q="<<*q<<endl;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"values after swapping:"<<endl;
	cout<<"a=*p="<<*p<<endl;
	cout<<"b=*q="<<*q<<endl;
	getch();
}