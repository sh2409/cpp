#include<iostream.h>
#include<conio.h>
struct Rectangle
{
	int length;
	int breadth;
};
void main()
{
	struct Rectangle rec;
	clrscr();
	rec.length=10;
	rec.breadth=5;
	cout<<"Area of Rectangle: "<<rec.length*rec.breadth;
	getch();
}
