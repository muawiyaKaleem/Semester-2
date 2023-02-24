#include<iostream>
using namespace std;

int main()
{
	float salary,ded = 0,new_salary;
	cout<<"Enter the Salary of the Employee => "; cin>>salary;
	
	// simple if else statements to full fill the required conditions
	if (salary < 10000)
	{
		new_salary = salary - ded;
		cout<<"Salary was less than 10,000."<<endl<<"Deduction => "<<ded<<endl<<"New Salary => "<<new_salary;
	}
	else if (salary >= 10000 && salary < 20000)
	{
		ded = 1000;
		new_salary = salary - ded;
		cout<<"Salary was more than or equal to 10,000 and less than 20,000."<<endl<<"Deduction => "<<ded<<endl<<"New Salary => "<<new_salary;
	}
	else if (salary >= 20000)
	{
		ded = (7.0/100.0)*salary;
		new_salary = salary - ded;
		cout<<"Salary was more than or equal to 20,000."<<endl<<"Deduction => "<<ded<<endl<<"New Salary => "<<new_salary;
	}
	
	
}