#include<iostream>
using namespace std;

int main()
{
	float x,y;
	char op,choice;
	do // do while loop for the repetetion of the program
	{
		// inputs
		cout<<"\nEnter the First Number => "; cin>>x;
		cout<<"\nEnter the Operator => "; cin>>op;
		cout<<"\nEnter the Second Number => "; cin>>y;
		
		//switch statements with calculations
		switch(op)
		{
			case '+':
				cout<<"\nAddition = > "<<x+y;
				break;
			
			case '-':
				cout<<"\nSubtraction = > "<<x-y;
				break;
			case '*':
				cout<<"\nMultiplication = > "<<x*y;
				break;
			case '/':
				cout<<"\nDivision = > "<<x/y;
				break;
			default:
				cout<<"\nOperator choice was not correct\n";
		}
		//repetetion permission
		cout<<"\nDo you want to continue the Calculation? (y/n) = >"; cin>>choice;
	}
	while(choice=='y'); // condition for while

	return 0;
}