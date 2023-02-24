#include<iostream>
using namespace std;

class Time
{
	int hours,minutes,seconds;
	
	public:
		
		Time()
		{
			hours = 0;
			minutes = 0;
			seconds = 0;
		}
		
		Time(int h,int m,int s)
		{
			this->hours = h;
			this->minutes = m;
			this->seconds = s;
		}
		
		void sum(Time i,Time j)
		{
			this->seconds = i.seconds + j.seconds;
			this->minutes = i.minutes + j.minutes; 
			this->hours = i.hours + j.hours;
			if(seconds >= 60)
			{
				seconds = seconds - 60;
				this->minutes++;
			}
			if(minutes >= 60)
			{
				minutes = minutes - 60;
				this->hours++;
			}
		}
		
		void display()
		{
			cout<<this->hours<<":"<<this->minutes<<":"<<this->seconds;
		}
};

int main()
{
	int a,b,c;
	Time x;
	cout<<"Time for 1st Clock:"<<endl<<endl;
	cout<<"Enter the hours => ";cin>>a;
	cout<<"Enter the minutes => ";cin>>b;
	cout<<"Enter the seconds => ";cin>>c;

	Time y(a,b,c);
	cout<<endl;
	y.display();
	cout<<endl<<endl;
	
	
	cout<<"Time for 2nd Clock:"<<endl<<endl;
	cout<<"Enter the hours => ";cin>>a;
	cout<<"Enter the minutes => ";cin>>b;
	cout<<"Enter the seconds => ";cin>>c;
	
	Time z(a,b,c);
	cout<<endl;
	z.display();
	cout<<endl<<endl;
	
	cout<<"Total Sum of two clocks:"<<endl;
	x.sum(y,z);
	cout<<endl;
	x.display();
	
	return 0;
	
}