#include<iostream>
using namespace std;

int Max(int x[10])
{
	int max = x[0]; // asuming the first element as maximum
	
	// finding maximum by simple logic of replacing the bigger value in the max variable 
	for(int i=0;i<10;i++)
	{
		if (x[i]>max)
		{
			max = x[i];
		}
	}
	return max;
}
int main()
{
	int array[10],c=0;
	
	// array declaration and putting values in it
	for (int i=0;i<10;i++)
	{
		cout<<"Enter the "<<c<<" index elemtent of array => ";
		cin>>array[i];
		c++;
	}
	int maximum = Max(array); // pass by value	
	cout<<endl<<"Maximum number in given array => "<<maximum;
	}