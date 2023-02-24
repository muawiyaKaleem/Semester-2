#include<iostream>
using namespace std;

int main()
{
	//2D Arrays declaration
	int A[3][2] = {{2,4},{6,8},{10,12}};
				  
	int B[3][2] = {{1,3},{5,7},{9,11}};
	
	cout<<"Element of A\t\tElement of B\t\tResultant"<<endl<<endl;
	
	// printing and addition of elements of 2D arrays
	for(int i=0;i<3;i++) // i for number of elements (rows)
	{
		for(int j=0;j<2;j++) // j for 2D elements (columns)
		{
			cout<<A[i][j]<<"\t\t\t"<<B[i][j]<<"\t\t\t"<<A[i][j]+B[i][j];
			cout<<endl;
		}
		cout<<endl;
	}
}