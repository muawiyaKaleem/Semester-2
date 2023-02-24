#include <iostream>
using namespace std;

class student{
	protected:
	string name , address, rollNo;
	
	public:
		void getStudent(string name, string address, string rollNo){
			this->name = name;
			this->address  = address;
			this->rollNo = rollNo;
		}
		void printStudent(){
			cout<<"name: "<<name<<"\naddress: "<<address<<"\nroll no: "<<rollNo<<endl;
		}
};


class uniStudent : public student {
	protected:
		float cgpa; 
		string dept;
		int semester;
	
	public:
		void getUniStudent(string name, string address, string rollNo, float cgpa, string dept,int semester){
			student::getStudent(name, address, rollNo); 
			this->cgpa = cgpa;
			this->dept =  dept;
			this->semester =  semester;
		}
		
		void printStudent(){
			student::printStudent(); 
			cout<<"cgpa: "<<cgpa<<"\ndeparment: "<<dept<<"\nsemester: "<<semester<<endl;
			
		}
};

int main(){
	uniStudent s1; //creating an object of the derived classs
	s1.getUniStudent("sheryar", "gilgit", "21p8027",3.0, "cs", 2); //setting data to data function
	s1.printStudent(); //printing data
}
