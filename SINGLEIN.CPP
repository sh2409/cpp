#include<iostream.h>
#include<conio.h>
class Animal
{
	public:
	void eat()
	{
		cout<<"Eating"<<endl;
	}
};
class Dog:public Animal
{
	public:
	void bark()
	{
		cout<<"Barking";
	}
};
void main()
{
	Dog d;
	clrscr();
	d.eat();
	d.bark();
	getch();
}