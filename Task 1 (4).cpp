#include<iostream>
using namespace std;

class Rectangle
{
	float length,breadth;
	
	public:
		
		Rectangle()
		{
			length = 0;
			breadth = 0;
		}
		
		Rectangle(float c)
		{
			length = c;
			breadth = c;
		}
		
		Rectangle(float a , float b)
		{
			length = a;
			breadth = b;
		}	
		
		float Area()
		{
				float area;
				area = this->length*this->breadth;
				return area;
		}
		
		void show()
		{
			cout<<"Length => "<<length;
			cout<<endl;
			cout<<"Breadth => "<<breadth;	
		}
				
		void Same_Area(Rectangle x,Rectangle y)
		{
			if (x.Area()==y.Area())
			{
				cout<<"\n\nAreas are Same\n\n";
			}
			else
			{
				cout<<"\n\nAreas are not same\n\n";
			}
		}
//		
			
};

int main()
{
	float g,h,i,j;
	Rectangle ob0,ob1(5.0),ob2(5.0,6.0);
	Rectangle arr[3]= {ob0,ob1,ob2};
	
	for(int i = 0;i<3;i++)
	{
		cout<<"Constructor with "<<i<<" Parameter"<<endl<<endl;
		arr[i].show();  
		cout<<endl<<endl;
		cout<<"Area => "<<arr[i].Area(); 
		cout<<endl<<endl;
	}
	
	string choice = "y";
	
	do
	{
		
		cout<<"Enter the length and breadth of first Rectangle => ";
		cin>>g>>h;
	
		cout<<"Enter the length and breadth of second Rectangle => ";
		cin>>i>>j;
	
		cout<<endl;
		Rectangle ob3;
		Rectangle a(g,h),b(i,j);
		
		ob3.Same_Area(a,b);
		
		cout<<"\n\nDo You wnat to contineu?\nPress y for yess OR n for no\n\nEnter your choice => ";
		cin>>choice;
		
	}while(choice == "y");
	
}