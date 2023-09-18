#include <iostream>
using namespace std;

class bank

{
	int acno;
	char no[100], acctype[100];
	float bal;
	
	public:
		bank(int acc_no, char *name, char *acc_type, float balance) 
		{
			acno=acc_no;
			strcpy(acctype, acc_type);
			strcpy(acctype,acc_type);
		    bal=balance;
		}
		
		void deposite();
		void withdraw();
		void display();
};
    void bank::deposite()
    {
    	int damt1;
    	cout<<"enter deposite ammount"<<endl;
    	cin>>damt1;
    	bal+=damt1;
	}
	void bank::withdraw()
	{
		int wamt1;
		cout<<"enter withdraw ammount"<<endl;
		cin>>wamt1;
		if(wamt1>bal)
        cout<<"Cannot Withdraw Amount"<<endl;
		bal-=wamt1;
	}
	void bank::display()
	{
		cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
//        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
		
	}
	
	int main()
	
	
	{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
  
		
		
	
	
	
		bank b1(acc_no, name, acc_type, balance);
		b1. deposite();
		b1. withdraw();
		b1. display();
		
		
		return 0;
	}