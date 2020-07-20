#include<iostream.h>
#include<conio.h>
class Animal
{
	public:
	void eat()
	{
		cout<<"Eating....";
	}
};
class Dog: public Animal
{
	public:
	void eat()
	{
		cout<<"Eating bread...";
	}
};
void main()
{
	Dog d;
	clrscr();
	d.eat();
	getch();
	getch();
}
