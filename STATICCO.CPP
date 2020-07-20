#include<iostream.h>
#include<conio.h>
class Stud
{
	public:
	int id;
	float marks;
	static int count;
	Stud(int id,float marks)
	{
		this->id=id;
		this->marks=marks;
		count++;
	}
	void disp()
	{
		cout<<id<<" "<<marks<<endl;
	}
};
int Stud::count=0;
void main()
{
	clrscr();
	Stud s1=Stud(11,90.0);
	Stud s2=Stud(24,90.0);
	s2.disp();
	s1.disp();
	cout<<"No. of Students:"<<Stud::count;
	getch();
}