#include<iostream>
using namespace std;

class complex
{
	int real;
	string imagin;
	
	public:
		void setter(int r,string i)
		{
			real = r;
			imagin = i;
		}
		
		int getReal()
		{
			return real;
		}
		
		string getImagin()
		{
			return imagin;
		}
};
void addition(complex a[2])
{
	int x;
	string y;
	string l = "";
	string m = "";
	
	x = a[0].getReal() + a[1].getReal();
	
	string s = a[0].getImagin();
	string t = a[1].getImagin();
	
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] != 'i')
		{
			l += s[i];
		}
		else
		{
			continue;
		}
	}
	
	for(int i = 0;i < t.length();i++)
	{
		if(t[i] != 'i')
		{
			m += t[i];
		}
		else
		{
			continue;
		}
	}
	
	int u;
	int v;
	
	u = stoi(l);
	v = stoi(m);
	
	int sum = u+v;
	
	cout<<"Sum => "<<x<<" + "<<sum<<"i";
}

int main()
{
	complex arr[2];
	
	int x,c = 1;
	string y;
	
	for(int i = 1;i <= 2;i++)
	{
		cout<<"Enter the Real and Imaginary Part of Number "<<c<<" => ";cin>>x>>y;
		c++;
	}
	
	cout<<"First Number => "<<arr[0].getReal()<<" + "<<arr[0].getImagin();
	cout<<endl;
	cout<<"Second Number => "<<arr[1].getReal()<<" + "<<arr[1].getImagin();
	cout<<endl;
	
	addition(arr);
	cout<<endl;
}