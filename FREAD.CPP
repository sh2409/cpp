#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{
	string c;
	clrscr();
	ifstream file;
	file.open("abc.txt");
	while(getline(file,c))
	{
		cout<<c;
	}
	getch();

}