#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the value of A and B => "; cin>>a>>b;
	int *ptrA = &a;
	int *ptrB = &b;
	cout<<"A = "<<*ptrA<<endl<<"B = "<<*ptrB;
	return 0;
}
