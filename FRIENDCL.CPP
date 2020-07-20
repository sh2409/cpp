#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	A(int a)
	{
	this->a=a;
	}
	friend class B;
};
class B
{
	public:
	void disp(A aa)
	{
		cout<<"a="<<aa.a;
	}
};
void main()
{
	clrscr();
	A a=A(5);
	B b;
	b.disp(a);
	getch();
}