#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	string name; // Declaring Required Variables
	
	// Input Taking using Getline Function For Full Name
	cout<<"Enter the Full Name => "; getline(cin,name);
	
	name[4]='_'; // Replacing index 4 (5th Character) of name by '_'
	name[9]='_'; // Replacing index 9 (10th Character) of name by '_'
	
	//Printing
	cout<<"New Name => "<<name;
}