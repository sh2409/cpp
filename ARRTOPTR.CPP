#include<iostream.h>
#include<conio.h>
void main()
{
	int *ptr;
	int marks[5];
	clrscr();
	cout<<"Enter marks:";
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
	}
	ptr=marks;
	cout<<"value of *ptr:"<<*ptr<<endl;
	cout<<"value of *marks:"<<*marks<<endl;
	getch();
}