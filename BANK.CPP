#include<iostream.h>
#include<conio.h>

class bank
{
	int acc_no,pwd,check_bal,dep,with,ch;
	char c;
	public:bank()
	{
		c='y';
		check_bal=1000;
		cout<<"please enter account no: ";
		cin>>acc_no;
		cout<<"please enter password: ";
		cin>>pwd;

		if(acc_no==12345 && pwd==1234)
		{
			do
			{
				cout<<"1.check balance"<<endl;
				cout<<"2.deposit"<<endl;
				cout<<"3.withdraw"<<endl;

				cout<<"Enter your choice: ";
				cin>>ch;

				switch(ch)
				{
					case 1:
						if(check_bal==0)
						{
							cout<<"NULL";
						}
						else if(check_bal>0)
						{
							cout<<"current balance is: Rs."<<check_bal<<endl;
						}
						break;
					case 2:
						cout<<"Enter amout to be deposited: ";
						cin>>dep;
						check_bal=check_bal+dep;
						cout<<"Your current balance is: Rs"<<check_bal<<endl;
						break;
					case 3:
						cout<<"Enter amount to be withdrawn: ";
						cin>>with;
						check_bal=check_bal-with;
						cout<<"Your current balance is: Rs"<<check_bal<<endl;
						break;
				}
				cout<<"Do you want to continue?";
				cin>>c;
			}while(c=='y');



		}
		else
		{
			cout<<"Invalid acc_no or password";
		}
	}
};
void main()
{
	clrscr();
	bank b;
	getch();
}