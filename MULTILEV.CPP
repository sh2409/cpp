#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void A1()
	{
		cout<<"This is A"<<endl;
	}
};
class B:public A
{
	public:
	void B1()
	{
		cout<<"This is B"<<endl;
	}
};
class C:public B
{
	public:
	void C1()
	{
		cout<<"This is C"<<endl;
	}
};
void main()
{
	C c;
	clrscr();
	c.A1();
	c.B1();
	c.C1();
	getch();
}