#include<iostream.h>
#include<conio.h>

class friend2;
class friend3;
class friend1
{
	int a;
	public:
	void input1()
	{
		cout<<"Enter value of a: ";
		cin>>a;
	}
	friend void find(friend1 f1);

};
class friend2
{
	int b;
	public:
	void input2()
	{
		cout<<"Enter value of b: ";
		cin>>b;
	}
	friend void find(friend2 f2);
};
class friend3
{
	int c;
	public:
	void input3()
	{
		cout<<"Enter value of c: ";
		cin>>c;
	}
	friend void find(friend3 f3);
};

void find(friend1 f1,friend2 f2,friend3 f3)
{
	cout<<"value of a: "<<f1.a;
	cout<<"value of b: "<<f2.b;
	cout<<"value of c: "<<f3.c;
}
void main()
{
	friend1 f1;
	friend2 f2;
	friend3 f3;
	f1.input1();
	f2.input2();
	f3.input3();
	find(f1,f2,f3);
	getch();
}