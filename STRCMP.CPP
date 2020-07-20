#include <iostream.h>
#include<string.h>
#include<conio.h>

int main()
{
    char a[]="shru";
    char name[50];
    clrscr();
    cout<<"Enter name:";
    cin>>name;
    if(strcmp(a,name)==0)
        cout<<"Valid";
    else
	cout<<"Invalid";
    getch();
    return 0;
}
