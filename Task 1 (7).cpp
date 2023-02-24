#include<iostream>
using namespace std;

class Employe
{
	protected:
		
		string name;
		int num;
	
	public:
		
		Employe()
		{
			cout<<"Default Constructor"<<endl<<endl;
			this->name = "No Name";
			this->num = 0;
		}
		
		Employe(string n,int no)
		{
			cout<<endl<<"Parameterised Constructor"<<endl<<endl;
			this->name = n;
			this->num = no;
		}
		
		void putData()
		{
			cout<<"Name => "<<name<<endl;
			cout<<"Number => "<<num<<endl;	
		}
};

class Manager : public Employe
{
	private:
		
		char title;
		double club_dues;
	
	public:
		Manager(char t,double cd):Employe()
		{
			this->title = t;
			this->club_dues = cd;
		}
		
		Manager(string n,int no,char t,double cd):Employe(n,no)
		{
			this->title = t;
			this->club_dues = cd;
		}
		
		void putData()
		{
			cout<<"\t\tManager Data: "<<endl<<endl;
			Employe::putData();
			cout<<"Title => "<<title<<endl;
			cout<<"Club Dues => "<<club_dues<<endl;	
		}
};

class Scientist : public Employe
{
	private:
		
		int publications;
	
	public:
		
		Scientist(string n,int no,int p):Employe(n,no)
		{
			this->publications = p;
		}
		
		void putData()
		{
			cout<<"\t\tScientist Data: "<<endl<<endl;
			Employe::putData();
			cout<<"Publications => "<<publications<<endl;
		}
};

class Programmer : public Employe
{
	protected:
		
		string exp;
		double salary;
	
	public:
		
		Programmer(string n,int no,string e,double s):Employe(n,no)
		{
			
			this->exp = e;
			this->salary = s;
		}
		
		void putData()
		{
			cout<<"\t\tProgrammer Data: "<<endl<<endl;
			Employe::putData();
			cout<<"Expertise => "<<exp<<endl;
			cout<<"Salary => "<<salary<<endl;	
		}
};

int main()
{
	int choice;
	cout<<"Press 1 to check Manager Data\nPress 2 to check Scientist Data\nPress 3 to check Programmer Data\n\n";
	
	cout<<"Enter your choice => "; cin>>choice;
	cout<<endl;
	
	switch(choice)
	{
		case 1:
			{
				Manager ob('M',45000);
				ob.putData();
				
				Manager ob1("Ali",8032,'M',45000);
				ob1.putData();
				
				break;
			}
		
		case 2:
			{
				Scientist ob2("Moiz",8054,7);
				ob2.putData();
				
				break;
			}
			
		case 3:
			{
				Programmer ob3("Muawiya",8030,"Web Developer",80000);
				ob3.putData();
				
				break;			
			}
			
		default:
			{
				cout<<"OOOPPPSSS Wrong Choice ----> Program has been Crashed"<<endl;
			}
	}
}