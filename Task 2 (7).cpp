#include<iostream>
using namespace std;

class Brain
{
	private:
		
		double memory;
	
	public:
		
		void brain(double m)
		{
			this->memory = m;
		}
		
		void putData()
		{
			cout<<"\t\tBrain Data: "<<endl<<endl;
			cout<<"Memory(in zeta bite) => "<<memory<<endl;	
		}
};

class Heart
{
	private:
		
		int beats;
	
	public:
		
		void heart(int b)
		{
			this->beats = b;
		}
		
		void putData()
		{
			cout<<"\t\tHeart Data: "<<endl<<endl;
			cout<<"Beats per minute => "<<beats<<endl;
		}
};

class Legs
{
	private:
		
		int speed;
			
	public:
		
		void legs(int sp)		
		{	
			this->speed = sp;
		}
		
		void putData()
		{
			cout<<"\t\tLegs Data: "<<endl<<endl;
			cout<<"Speed (meter per second) => "<<speed<<endl;	
		}
};

class Person
{
	protected:
		
		string name;
		int id;
		Brain ob1;
		Heart ob2;
		Legs ob3;
		
	public:
		
		Person(string n,int i)
		{
			this->name = n;
			this->id = i;
			ob1.brain(600);
			ob2.heart(120);
			ob3.legs(40);	
		}
		
		void putData()
		{
			cout<<"Name => "<<name<<endl;
			cout<<"Number => "<<id<<endl;
			ob1.putData();
			ob2.putData();
			ob3.putData();	
		}
};


int main()
{
	Person ob("Muawiya",8030);

	ob.putData();
}