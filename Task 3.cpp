#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the Triangle => "; cin>>n; //size of the triangle
	cout<<endl<<endl;
	for(int i=n;i>=1;i--) // i loop for the number of rows  (for upside down triangle we will decrement)
	{
		for (int j=i;j>=1;j--) //j loop for the number of column (for upside down triangle we will decrement)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}