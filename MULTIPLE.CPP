#include<iostream.h>
#include<conio.h>
class A
{
	public:
	int a;
	void A1(int n)
	{
		a=n;
	}

};
class B
{
	public:
	int b;
	void B1(int n)
	{
		b=n;
	}
};
class C:public A,public B
{
	public:
	int c;
	void C1(int n)
	{
		c=n;
	}
	void display()
	{
		cout<<"Value of a:"<<a<<endl;
		cout<<"value of b:"<<b;
		cout<<"Value of c:"<<c;
		cout<<"Addition of a,b & c:"<<a+b+c;
	}
};
void main()
{
	C c;
	clrscr();
	c.A1(11);
	c.B1(5);
	c.C1(24);
	c.display();
	getch();
}