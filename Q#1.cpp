#include<iostream>
using namespace std;

class Shapes{
	public:
		Shapes(){
			cout<<"Constructor of Shape class"<<endl;
		}
		
		virtual int area()=0;
		
		~Shapes(){
			cout<<"Destructor of Shape class"<<endl;
		}
		

		
};

class _2D : public Shapes{
	public:
		_2D(){
			cout<<"Constructor of 2D Shapes class"<<endl;
		}
		
		~_2D(){
			cout<<"Destructor of 2D Shapes class"<<endl;
		}	
};

class _3D : public Shapes
{
	public:
		_3D()
		{
			cout<<"Constructor of 3D Shapes class"<<endl;
		}
		
		virtual int Volume()=0;
		
		~_3D()
		{
			cout<<"Destructor of 3D Shapes class"<<endl;
		}
		
};

class circle : public _2D
{
	float radius;
	
	public:
		circle(float radius=0)
		{
			this->radius=radius;
			cout<<"Constructor of circle class"<<endl;
		}
		
		int area()
		{
			return (2*3.14)*(radius*radius);
		}
		
		~circle()
		{
			cout<<"Destructor of circle class"<<endl;
		}
		
};

class Square : public _2D
{
	int side;
	
	public:
		Square(int side=0)
		{
			this->side=side;
			cout<<"Constructor of square class"<<endl;
		}
		
		int area()
		{
			return side*side;
		}
		
		~Square()
		{
			cout<<"Destructor of square class"<<endl;
		}
		
};

class Cube : public _3D
{
	int length,width,height;
	
	public:
		Cube( int length=0 , int width=0 , int height=0 )
		{
			this->length=length;
			this->width=width;
			this->height=height;
			
			cout<<"Constructor of cube class"<<endl;
		}
		
		int area()
		{
			return 6*length*length;
		}

		int Volume()
		{
			return length*width*height;
		}
		
		~Cube(){
			cout<<"Destructor of cube class"<<endl;
		}
};
		
		

class Pyramid : public _3D
{
	int base,height;

	public:
		Pyramid( int base=0 , int height=0 ){
			this->base=base;
			this->height=height;
			
			cout<<"Constructor of Pyramid class"<<endl;
		}
		
		int area(){
			return base*height;
		}
		
		int Volume(){
			return (base*height)/3;
		}
		
		~Pyramid(){
			cout<<"Destructor of Pyramid class"<<endl;
		}
};

int main(){
	_2D *ob1[2];
	
	_3D *ob2[2];
	
	circle ob3(3.5);
	
	Square ob4(9);
	
	Cube ob5(4,8,13);
	
	Pyramid ob6(6,17);
	
	ob1[0] = &ob3;
	ob1[1] = &ob4;
	ob2[0] = &ob5;
	ob2[1] = &ob6;
	
	cout<<"Area of circle is "<<ob1[0]->area()<<endl;
	
	cout<<"Area of Square is "<<ob1[1]->area()<<endl;
	
	cout<<"Area of Cube is "<<ob2[0]->area()<<endl;
	
	cout<<"Volume of Cube is "<<ob2[0]->Volume()<<endl;
	
	cout<<"Area of Pyramid is "<<ob2[1]->area()<<endl;
	
	cout<<"Volume of Pyramid is "<<ob2[1]->Volume()<<endl;
	
	return 0;
}
