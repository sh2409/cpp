#include<iostream.h>
#include<conio.h>
struct Rect
{
	int l,b;
	Rect(int l,int b)
	{
		this->l=l;
		this->b=b;
	}
	void disp()
	{
		cout<<"Area of Rectangle: "<<l*b<<endl;
	}
};
void main()
{
	clrscr();
	Rect r=Rect(11,5);
	Rect r1=Rect(24,5);
	r.disp();
	r1.disp();
	getch();
}