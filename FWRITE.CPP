#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	clrscr();
	ofstream file;
	file.open("abc.txt");
	file<<"Hello!"<<endl;
	file<<"I am Shruti."<<endl;
	file.close();

	getch();
}