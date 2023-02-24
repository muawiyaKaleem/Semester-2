#include<iostream>
using namespace std;

struct Point
{
	int x,y;
};
Point calculator(Point p1,Point p2)
{
	Point p3;
	p3.x = p1.x+p2.x;
	p3.y = p1.y+p2.y;
	
	return p3;
}
int main()
{
	Point p1,p2;
	cout<<"Enter the x,y co ordinate of point 1 => "; cin>>p1.x>>p1.y;
	cout<<endl;
	cout<<"Enter the x,y co ordinate of point 2 => "; cin>>p2.x>>p2.y;
	cout<<endl;
	cout<<"co ordinates of Point 1 => "<<"( "<<p1.x<<" "<<p1.y<<" )";
	cout<<endl;
	cout<<"co ordinates of Point 2 => "<<"( "<<p2.x<<" "<<p2.y<<" )";
	
	Point p3 = calculator(p1,p2);
	
	cout<<endl<<endl;
	cout<<"Sum of two points => "<<"( "<<p3.x<<" "<<p3.y<<" )"; 
}
