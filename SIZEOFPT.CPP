#include<iostream.h>
#include<conio.h>
void main()
{
	int a,*p;
	float f,*q;
	char c,*r;
	clrscr();
	p=&a;
	q=&f;
	r=&c;
	cout<<"size of a:"<<sizeof(a)<<endl;
	cout<<"size of p:"<<sizeof(p)<<endl;
	cout<<"size of *p:"<<sizeof(*p)<<endl;
	cout<<"size of f:"<<sizeof(f)<<endl;
	cout<<"size of q:"<<sizeof(q)<<endl;
	cout<<"size of *q:"<<sizeof(*q)<<endl;
	cout<<"size of c:"<<sizeof(c)<<endl;
	cout<<"size of r:"<<sizeof(r)<<endl;
	cout<<"size of *r:"<<sizeof(*r)<<endl;
	getch();
}