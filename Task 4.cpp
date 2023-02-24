#include<iostream>
using namespace std;

int main()
{
	
	// simple outputs in boolean form (0 or 1)
	int x=10,y=15,z=20;
	cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl<<endl;
	cout<<"1: !(x>10) => "<<!(x>10)<<endl;
	cout<<"2: x <= 5 || y < 15 => "<<(x<= 5 || y < 15)<<endl;
	cout<<"3: (x != 5) && (y != z) => "<<((x != 5) && (y != z))<<endl;
	cout<<"4: (x != 5) && (y != z) => "<<(x >= z || (x + y >= z))<<endl;
	cout<<"5: (x <= y - 2) && (y >= z) || (z - 2 != 20) => "<<((x <= y - 2) && (y >= z) || (z - 2 != 20))<<endl;
	return 0;
}