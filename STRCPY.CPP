#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[30];
	clrscr();
	cout<<"Enter a String:";
	cin>>s1;
	strcpy(s2,s1);
	cout<<s2;
	getch();
}