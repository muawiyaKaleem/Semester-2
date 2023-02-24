#include <iostream>
using namespace std;


class Chef{
	protected:
		string dishes;
		
	public:
		Chef(){ 
			dishes = "chicken, salad and a special dish";
		}
		
		void printDish(){
			cout<<dishes<<endl;
		}
};

class ItalianChef : Chef{
	protected:
		string dish;
	public:
		ItalianChef() :Chef(){
			dish = "Pizza, pasta ,";
					}
		void printDish(){
			cout<<"the dishes Chef can make are: "<<dish;
			Chef::printDish();
		}
};

class ChineseChef : Chef{
	protected:
		string dish;
	public:
		ChineseChef() :Chef(){
			dish = "Fried rice, ";
		}
		void printDish(){
			cout<<"the dishes Chef can make are: "<<dish;
			Chef::printDish();
		}
};

int main(){
	ItalianChef i;
	i.printDish();
	ChineseChef c;
	c.printDish();
}
