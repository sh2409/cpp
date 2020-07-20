#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	int *p,*q;
	clrscr();
	cout<<"Enter a & b:";
	cin>>a>>b;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	p=&a;
	q=&b;
	cout<<"a=*p="<<*p<<endl;
	cout<<"b=*q="<<*q<<endl;
	cout<<"Address of a:"<<&a<<endl;
	cout<<"Address of b:"<<&b<<endl;
	cout<<"Address of a=p="<<p<<endl;
	cout<<"Address of b=q="<<q<<endl;
	getch();
}