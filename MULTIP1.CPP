#include<iostream.h>
#include<conio.h>
class A
{
	public:
	A()
	{
		cout<<"A";
	}
};
class B
{
	public:
	B()
	{
		cout<<"B";
	}
};
class C:public A,public B
{
	public:
	C()
	{
		cout<<"C";
	}
};
void main()
{
	clrscr();
	C c=C();
	getch();
}
