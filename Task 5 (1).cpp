#include <iostream>
using namespace std;

int main()
{
	string s;
	cout<<"Enter the input(string) in the variable => "; getline(cin,s);
	cout<<endl<<endl;
	string *p = &s;
	cout<<"Value in variable => "<<*p;
	cout<<endl<<endl;
	cout<<"Address of variable => "<<p;
}