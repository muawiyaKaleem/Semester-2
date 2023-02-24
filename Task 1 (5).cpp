#include<iostream>
#include<sstream>
using namespace std;

static int counter = 0;
class Project
{
	public:
		Project()
		{
			counter++;
			stringstream a;
  			a<<counter;  
  			string b;  
  			a>>b;
  			string serial = "2022FAST0" + b + "OOP";
			cout<<"I am Project with serial number => "<<serial<<endl<<endl;
		}
};

int main()
{
	Project ob1,ob2,ob3,ob4,ob5;
}