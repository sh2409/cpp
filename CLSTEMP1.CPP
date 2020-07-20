#include<iostream.h>
#include<conio.h>
template<class T1,class T2>
class A
{
	T1 a;
	T2 b;
	public:
	A(T1 x,T2 y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a:"<<a<<endl<<"b:"<<b;
	}
};
void main()
{
	A<int,float> a(11,24.5);
	clrscr();
	a.display();
	getch();
}