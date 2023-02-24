#include <iostream>
using namespace std;

class tollBooth
{
	int totalNumberOfCars,payingCars,NonPayingCars;
	double totalAmount;
	public:
		void setDataMember()
		{
				totalNumberOfCars = 0;
				totalAmount = 0;
				payingCars = 0;
				NonPayingCars = 0;
		}
		void payCars(string k)
		{
			totalNumberOfCars++;
			if(k=="1")
			{
				payingCars++;	
				totalAmount += 50;
			}
			
		}
		void noPayingCars(string k)
		{
			totalNumberOfCars++;
			if(k=="2")
			{
				NonPayingCars++;
			}
		}
		int display()
		{
			cout<<"Total Cars => "<<totalNumberOfCars<<endl;
			cout<<"Paying Cars => "<<payingCars<<endl;
			cout<<"Non Paying Cars => "<<NonPayingCars<<endl;
			cout<<"Total Amount => "<<totalAmount<<endl;
			return 0;
		}
};
int main()
{
	tollBooth ob;
	string key;
	ob.setDataMember();
	string Choice="c";
	
	cout<<"Press 1 for Paying Cars"<<endl<<"Press 2 for Non Paying Cars"<<endl<<"Press d for Display"<<endl<<endl;
	while(Choice == "c")
	{
		cout<<"Enter Your choice => ";cin>>key;
		cout<<endl;
		if(key == "1")
		{
			ob.payCars(key);	
		}
		else if (key == "2")
		{
			ob.noPayingCars(key);
		}
		else if (key=="d")
		{
			ob.display();		
			cout<<"\nPress C continue OR E to end the Program => ";cin>>Choice;
			cout<<endl;
			cout<<"Press 1 for Paying Cars"<<endl<<"Press 2 for Non Paying Cars"<<endl<<"Press d for Display"<<endl<<endl;
		}
	}
}