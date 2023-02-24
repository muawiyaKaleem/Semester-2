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
  			string serial = "2022FAST0" + convert() + "OOP";
			cout<<"I am Project with serial number => "<<serial<<endl<<endl;
		}
		const string convert()
		{
			stringstream a;
  			a<<counter;  
  			string b;  
  			a>>b;
  			return b;
		}
};

int main()
{
	const Project ob1,ob2,ob3,ob4,ob5;
}