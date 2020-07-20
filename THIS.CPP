#include<iostream.h>
#include<conio.h>
class Stud
{
	public:
	int id;
	float marks;
	Stud(int id,float marks)
	{
		this->id=id;
		this->marks=marks;
		cout<<id<<" "<<marks<<endl;
	}
};
void main()
{
	clrscr();
	Stud s=Stud(11,90.9);
	Stud s1=Stud(24,90.9);
	getch();
}