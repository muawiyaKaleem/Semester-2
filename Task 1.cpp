#include<iostream>
using namespace std;

int main()
{
	int n,c=1; // c is the variable which is giving the multiples of input number
	cout<<"Enter the Number => "; cin>>n;
	
	for (int i = 1;i <= 10;i++) // i loop for the rows
	{
		for(int j = 1 ; j <= 10;j++) // j loop for the column
		{
			cout<<n*c<<"\t";
			c++;
		}
		cout<<endl;
		
	}
	return 0;
}