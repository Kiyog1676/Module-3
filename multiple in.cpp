#include <iostream>
using namespace std;

class student
{
	public:
		char name[100];
		int age;
		
		void getdata()
		{
			cout<<"enter your name"<<endl;
		    gets (name);
		    
		    cout<<"enter your age"<<endl;
		    cin>>age;
		    
		}
};

class marks:public student
{
	int sub1;
	int sub2;
	int sub3;
	int per;
	
	public:
		
		void input()
		{
			getdata();
			cout<<"enter your marks sub1"<<endl;
			cin>>sub1;
			cout<<"enter your marks sub2"<<endl;
			cin>>sub2;
			cout<<"enter uour marks sub3"<<endl;
			cin>>sub3;
		}
			
		
};

void calculate()
{
//	percentage=(sub1+sub2+sub3)/3;
	
	cout<<"total percentage is "<<endl;
	char(per);
};

int main()
{
	marks m;
	m.age();
	
}
