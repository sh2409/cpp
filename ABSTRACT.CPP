#include<iostream.h>
#include<conio.h>
class Shape
{
	public:
	virtual void draw()=0;
};
class Rectangle:Shape
{
	public:
	void draw()
	{
		cout<<"Drawing Rectangle"<<endl;
	}
};
class Circle:Shape
{
	public:
	void draw()
	{
		cout<<"Drawing Circle"<<endl;
	}
};
void main()
{
	clrscr();
	Rectangle r;
	Circle c;
	r.draw();
	c.draw();
	getch();
}