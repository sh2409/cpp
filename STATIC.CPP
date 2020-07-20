#include<iostream.h>
#include<conio.h>
class Stud
{
	public:
	int id;
	float marks;
	static int clgid;
	Stud(int id,float marks)
	{
		this->id=id;
		this->marks=marks;
	}
	void disp()
	{
		cout<<id<<" "<<marks<<endl;
	}
};
int Stud::clgid=1000101;
void main( )
{
	clrscr();
	Stud s=Stud(11,90.9);
	Stud s1=Stud(24,90.8);
	s1.disp();
	s.disp();
	getch();
}