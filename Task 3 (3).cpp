#include<iostream>
#include <cmath>
using namespace std;

class Number
{
	float num;
	int result;
	int fact = 1;
	public:
		float wholeNumber()
		{
			if (round(num)==num)
			{
				return num;
			}
			else
			{
				cout<<"\nInvalid Input"<<endl;
			}
		}
		void setter(float x)
		{
			num = x;
		}
		float getter()
		{
			return num;
		}
		int positiveNummber()
		{
			if (num>0)
			{
				return num;
			}
			else
			{
				cout<<"\nInvalid Number"<<endl;
			}
		}
		
		void factorial(int f)
		{
			
			for(int i=1;i<=f;i++)
			{
				fact *= i; 
			}
		}
		int display()
		{
			cout<<"Factorial of "<<num<<" => "<<fact<<endl;
			return 0;
		}
};

int main()
{
	Number ob;
	float n;
	cout<<"Enter the Number => ";cin>>n;
	ob.setter(n);
	ob.wholeNumber();
	if (ob.positiveNummber()==ob.getter() && ob.wholeNumber()==ob.getter())
	{
		ob.factorial(ob.getter());
		ob.display();
	}
}