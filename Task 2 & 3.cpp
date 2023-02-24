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
		// THIS IS OPERATOR OVERLOADING FUNCTION 		
		Time operator + (Time y)
		{
			Time temp;
			temp.seconds = seconds + y.seconds;
			temp.minutes = minutes + y.minutes; 
			temp.hours = hours + y.hours;
			if(temp.seconds >= 60)
			{
				temp.seconds = temp.seconds - 60;
				temp.minutes++;
			}
			if(temp.minutes >= 60)
			{
				temp.minutes = temp.minutes - 60;
				temp.hours++;
			}
			return temp;
		}
		
		// postfix ++
		
		void operator ++ (int)
		{
			minutes++;
		}
		
		// postfix --
		
		void operator -- (int)
		{
			minutes--;
		}
				
		// ++ prefix 
		
		void operator ++ ()
		{
			++minutes;
		}
		
		// -- prefix 
		
		void operator --()
		{
			--minutes;
		}
		
		void display()
		{
			cout<<this->hours<<":"<<this->minutes<<":"<<this->seconds;
		}
};

int main()
{
	int a,b,c;
	Time x,o;
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
	
	cout<<"Total Sum of two clocks => ";
	o = y+z; // THIS IS OPERATOR OVERLOADING
	o.display();
	
	// Operator overloading task 3
	
	++y;
	cout<<endl<<"Prefix ++ => ";
	y.display();
	
	--y;
	cout<<endl<<"Prefix -- => ";
	y.display();
	
	z++;
	cout<<endl<<"Postfix ++ => ";
	z.display();
	
	z--;
	cout<<endl<<"Postfix -- => ";
	z.display();
	
	return 0;
	
}