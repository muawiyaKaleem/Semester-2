#include <iostream>
using namespace std;

struct Time
{
	int hours,minutes,seconds;
};
int calculator(Time t)
{
	int total;
	total = (t.hours*3600)+(t.minutes*60)+(t.seconds);
	return total;
}
int main()
{
	Time t;
	cout<<"Enter the number of hours => "; cin>>t.hours;
	cout<<"Enter the number of minutes => "; cin>>t.minutes;
	cout<<"Enter the number of seconds => "; cin>>t.seconds;
	int second = calculator(t);
	cout<<endl<<"Total number of seconds => "<<second;
}

