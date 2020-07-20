#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void display()
	{
		cout<<"A";
	}
};
class B
{
	public:
	void display()
	{
		cout<<"B";
	}
};
class C:public A,public B
{
	public:
	void view()
	{
		cout<<"c";
	}
};
void main()
{
	clrscr();
	C c;
	c.display();
	getch();
}