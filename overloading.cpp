#include <iostream>
using namespace std;

class marks 
{
	public:
		int a,b;
		void add()
		{
			cout<<"enter your marks"<<endl;
			cout<<"total marks is"<<a+b<<endl;
		}
		void sub()
		
		{
			cout<<"enter your marks"<<endl;
			cout<<"total marks is"<<a-b<<endl;
		}
		void mult()
		
		{
			cout<<"enter your marks"<<endl;
			cout<<"total marks is"<<a*b<<endl;
		}
		void div()
		
		{
			cout<<"enter your marks"<<endl;
			cout<<"total marks is"<<a/b<<endl;
		}
		
};

int main()
{
	marks m;
	m.add(1,5);
	m.sub(2,6);
	m.div(3,6);
	m.mult(3,7);
}