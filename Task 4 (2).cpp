#include <iostream>
using namespace std;

int main()
{
	int l,max;
	cout<<"enter the length of the array => "; cin>>l;
	int array[l];	
	cout<<endl;
	for(int i=0;i<l;i++)
	{
		cout<<"Enter the "<<i<<" index element of the array => "; cin>>array[i];
	}
	for(int i=0;i<l;i++)
	{
		if(array[i]>=max)
		{
			max=array[i];
		}
	}
	cout<<endl;
	int *p = &max;
	cout<<"Maximum Value => "<<*p;
}
