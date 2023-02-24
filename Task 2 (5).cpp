#include<iostream>
using namespace std;



class SavingsAcount
{
	float savingBalance = 0;
	
	public:
		static float annualInterestRate;
		
		void CalculateMonthlyInterest()
		{
			float a;
			a = savingBalance * annualInterestRate/12.0;
			
			savingBalance += a; 
		}
	
		 void setBalance(float x)
		{
			savingBalance=x;
		}
		
		static void modifyRate()
		{
			annualInterestRate = 4.0/100.0;
		}
		float print()
		{
			return savingBalance;
		}
};

float SavingsAcount::annualInterestRate = 3.0/100.0;

int main()
{
	SavingsAcount s1,s2;
	
	s1.setBalance(2000.0);
	s2.setBalance(3000.0);
	
	cout<<"SAVER 1 BALANCE => "<<s1.print();
	cout<<endl;
	cout<<"SAVER 2 BALANCE => "<<s2.print();
	cout<<endl<<endl;
	
	cout<<"Balance with 3% Interest:"<<endl<<endl;
	
	s1.CalculateMonthlyInterest();
	s2.CalculateMonthlyInterest();
	
	cout<<"SAVER 1 BALANCE => "<<s1.print();
	cout<<endl;
	cout<<"SAVER 2 BALANCE => "<<s2.print();
	cout<<endl<<endl;
	
	cout<<"Balance with 4% Interest:"<<endl<<endl;
	
	s1.CalculateMonthlyInterest();
	s2.CalculateMonthlyInterest();
	
	cout<<"SAVER 1 BALANCE => "<<s1.print();
	cout<<endl;
	cout<<"SAVER 2 BALANCE => "<<s2.print();
	cout<<endl;
}