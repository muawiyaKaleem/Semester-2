#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact = 1;
	// loop for multiplication
	for(int i=1; i<=n;i++)
	{
		fact = fact*i; //multiplying and saving the answer 
	}
	return fact;
}
int main()
{
	int n,f;
	cout<<"Enter the number => "; cin>>n;
	f = factorial(n);
	cout<<"Factorial of "<<n<<" is "<<f;
}