#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50];
	clrscr();
	cout<<"Enter 2 strings:";
	cin>>s1>>s2;
	cout<<strcat(s1,s2);
	getch();
}
