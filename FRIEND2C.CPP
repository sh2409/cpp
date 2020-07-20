#include<iostream.h>
#include<conio.h>
class Friend2;
class Friend3;
class Friend1
{
	private:
	int a;
	public:
	void getdata()
	{
		cout<<"Enter value of a:";
		cin>>a;
	}
	friend void Max(Friend1,Friend2,Friend3);
};
class Friend2
{
	private:
	int b;
	public:
	void getdata()
	{
		cout<<"Enter value of b:";
		cin>>b;
	}
	friend void Max(Friend1,Friend2,Friend3);
};
class Friend3
{
	private:
	int c;
	public:
	void getdata()
	{
		cout<<"Enter value of c:";
		cin>>c;
	}
	friend void Max(Friend1,Friend2,Friend3);
};
void Max(Friend1 f1,Friend2 f2,Friend3 f3)
{
	if(f1.a>f2.b && f1.a>f3.c)
	{
		cout<<"greater no is a "<<f1.a;
	}
	else if(f2.b>f1.a && f2.b>f3.c)
	{
		cout<<"greater no is b "<<f2.b;
	}
	else
	{
		cout<<"greater no is c "<<f3.c;
	}
}
void main()
{
	Friend1 f1;
	Friend2 f2;
	Friend3 f3;
	clrscr();
	f1.getdata();
	f2.getdata();
	f3.getdata();
	Max(f1,f2,f3);
	getch();
}
