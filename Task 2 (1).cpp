#include<iostream>
using namespace std;

int passByReference(int *x)
{
	//pass by reference includes pointers
	*x = *x**x**x;
	return *x;
}

int passByValue(int x)
{
	//pass by value includes copy values
	x = x*x*x;
	return x;
}
int main()
{
	int n;
	cout<<"Enter the number => "; cin>>n;
	int cube_value = passByValue(n); //pass by value needs value
	int cube_reference = passByReference(&n);//pass by reference needs address of the value
	
	cout<<endl<<"Pass by Value => "<<cube_value<<endl<<endl; 
	cout<<"Pass by Reference => "<<cube_reference;
}