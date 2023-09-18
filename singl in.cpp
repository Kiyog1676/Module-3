#include <iostream>
using namespace std;

class batsman
	{
		int bcode;
		char bname[30];
		int innings,notout,runs;
		int batavg;
		void calcavg()
		
		
		{
		batavg=runs/(innings-notout);
	    }
		
		public:
			
			void readdata();
			void displaydata();
	};
	
	void batsman::readdata()
	
	{
		cout<<"enter batsman code"<<endl;
		cin>>bcode;
		
		cout<<"enter batsman name"<<endl;
		gets(bname);
		
		cout<<"enter innings,notout and runs";
		cin>>innings>>notout>>runs;
		calcavg();
	}
	
	void batsman::displaydata()
	{
		cout<<"Enter batsman code ";
	    cin>> bcode;
	
	    cout<<"Enter batsman name ";
	    gets(bname);
	
	    cout<<"enter innings,notout and runs ";
	    cin>>innings>>notout>>runs;
	    calcavg();
	}

main()
{
	batsman obj;
	obj.displaydata();
	obj.readdata();
//	getch ();
	
}