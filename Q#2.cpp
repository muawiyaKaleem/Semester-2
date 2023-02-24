#include<iostream>
using namespace std;

class bankAccount
{
	int ac;
	string name;
	double balance;
	
	public:
		bankAccount(int acc , string n , double b) : ac(acc) , name(n) , balance(b) {}
		
		int get_acc(){
			return ac;
		}
		
		string get_name(){
			return name;
		}
		
		double get_balance(){
			return balance;
		}
		
		void deposit(int a){
			balance=balance+a;
		}
		int withdraw_money(int b){
			balance=balance-b;
			return b;
		}
		
		void monthly_installment(int a){
			balance=balance-a;
		}
};

class checkingAccount:public bankAccount{
	public:
		checkingAccount(int acc , string n , double b):bankAccount(acc , n , b){}
		
		virtual void writeCheck()=0;
};

class certificateOfDeposit:public bankAccount{
	protected:
		int CD_mature_month;
		float interest_rate;
		int current_CD_month;	
	public:
		certificateOfDeposit(int CD_m , float IR , int c_CD_m , int acc , string n , double b):bankAccount(acc , n , b)
		{
			CD_mature_month=CD_m;
			interest_rate=IR;
			current_CD_month=c_CD_m;
		}
		
};

class savingsAccount:public bankAccount{
	
	float interest;

	public:
		savingsAccount(float interest , int acc , string n , double b):bankAccount(acc , n , b)
		{
			this->interest=interest;
		}
};

class HighInterestsaving:public savingsAccount
{
	
	int MinimumBalance;
	
	public:
		HighInterestsaving(int M_B , float interest , int acc , string n , double b):savingsAccount(interest , acc , n , b)
		{
			this->MinimumBalance=M_B;
		}
};

class serviceChargeChecking:public checkingAccount
{
	public:
		serviceChargeChecking(int acc , string n , double b):checkingAccount(acc , n , b){}
		
		void writeCheck()
		{
			int no;
			cout<<"Write check to withdraw money: ";
			cin>>no;
			cout<<"Withdrawn money: "<<withdraw_money(no)<<endl;
			cout<<"Remaing balance: "<<balance<<endl;
		}
};

class NoserviceChargeChecking:public checkingAccount
{	
	float interest;
		
	public:
		NoserviceChargeChecking(float interest , int acc , string n , double b):checkingAccount(acc , n , b)
		{
			this->interest=interest; 
		}
		
		void writeCheck()
		{
			int no;
			cout<<"Write check to withdraw money: ";
			cin>>no;
			if(balance-no>=3000)
			{
				cout<<"Withdrawn money: "<<withdraw_money(no)<<endl;
				cout<<"Remaing balance: "<<balance<<endl; 
			}
			else
			{
				 cout<<"Sorry you can't withdraw money because of limited balance"<<endl; 
			}
		}
};

class HighInterestChecking : public NoserviceChargeChecking
{
	public:
		HighInterestChecking(float interest , int acc , string n , double b):NoserviceChargeChecking(interest , acc , n , b)
		{}
		
		void writeCheck()
		{
			int no;
			cout<<"Write check to withdraw money: ";
			cin>>no;
			if( balance-no >= ( 3000+(interest*100/balance) ) )
			{
				cout<<"Withdrawn money: "<<withdraw_money(no)<<endl;
				balance=balance-((interest*100)/balance);
				cout<<"Remaing balance: "<<balance<<endl;
			}
			else
			{
				cout<<"Sorry you can't withdraw money because of limited balance"<<endl; 
			}
		}
};

int main()
{
	bankAccount A(82,"Muawiya",45000);
	A.deposit(20000);
	
	cout<<"Your account number is:"<<A.get_acc()<<endl;
	cout<<"Total amount in your account is:"<<A.get_balance()<<endl;
	cout<<"Account holder name is:"<<A.get_name()<<endl;
	
	A.monthly_installment(7000);
	
	cout<<"Total amount after monthly installment is:"<<A.get_balance()<<endl;
	
	certificateOfDeposit CD(12,3.12,3,45,"Chaudhary",50000);
	
	savingsAccount SA(3.33,54,"Kaleem",100000);
	
	serviceChargeChecking SCC(54,"Usama",67544);
	
	SCC.writeCheck();
	
	NoserviceChargeChecking NSCC(3.2,54,"Kaleem",67544);
	
	NSCC.writeCheck();
	
	HighInterestsaving HIS(30,4.5,45,"Ali",45678);
	
	HighInterestChecking HIC(3.33,67,"Asif",60000);
	
	HIC.writeCheck();
	
	return 0;
}
