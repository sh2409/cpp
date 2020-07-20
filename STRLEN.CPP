#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50];
	char s2[]="Hello! How are you?";
	clrscr();
	cout<<"Enter a string:" ;
	cin>>s1;
	cout<<"Length is:"<<strlen(s1)<<endl;
	cout<<"Length:s2:"<<strlen(s2);
	getch();
}