#include<iostream>
using namespace std;

class Laptop
{
	string Brand;
	string Model;
	unsigned int Serial;
	string Color;
	float Price;
	float processorSpeed;
	int Ram;
	float screenSize;
	
	public:
		void setData()
		{
			cout<<"Enter the Name of the Brand => ";cin>>Brand;
			cout<<"Enter the Name of the Model => ";cin>>Model;
			cout<<"Enter the Serial Number => ";cin>>Serial;
			cout<<"Enter the Color => ";cin>>Color;
			cout<<"Enter the Price => ";cin>>Price;
			cout<<"Enter the Speed of Processor => ";cin>>processorSpeed;
			cout<<"Enter the Capacity of Ram => ";cin>>Ram;
			cout<<"Enter the Size of the Screen => ";cin>>screenSize;
		}
		void upgrade(int r)
		{
			Ram = r;
		}
		int display()
		{
			cout<<"\t\t\tDETAIL ABOUT YOUR LAPTOP"<<endl<<endl;
			cout<<"Name of the Brand => "<<Brand<<endl;
			cout<<"Name of the Model => "<<Model<<endl;
			cout<<"Serial Number => "<<Serial<<endl;
			cout<<"Color => "<<Color<<endl;
			cout<<"Price => "<<Price<<endl;
			cout<<"Speed of Processor => "<<processorSpeed<<endl;
			cout<<"Capacity of Ram => "<<Ram<<endl;
			cout<<"Size of the Screen => "<<screenSize<<endl;
			return 0;
		}
};
int main()
{
	Laptop l;
	string choice;
	int ram; 
	cout<<"\t\t\tEnter Detail About the Laptop"<<endl;
	l.setData();
	l.display();
	cout<<endl<<"Do you want to Upgrade Ram?"<<endl<<"Press 1 if Yess OR Press 2 if No => ";cin>>choice;
	if(choice == "1")
	{
		cout<<"Enter the New Ram Speed => ";cin>>ram;
		l.upgrade(ram);
		l.display();
	}
	else if(choice == "2")
	{
		l.display();
	}
}