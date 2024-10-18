/*
Define a class to represent a bank account. Include the following members: 
	1. Data Member : 
		- Name of the depositor 
		- Account Number 
		- Type of Account 
		- Balance amount in the account 
		
	2. Member Functions : 
		- To assign values 
		- To deposited an amount 
		- To withdraw an amount after checking balance 
		- To display name and balance 

*/

#include<iostream>
using namespace std;
class BankAccount
{
	private :
		string name;
		double acountno;
		string accounttype;
		double balance;
	public :
		void set(double a,double b)
		{
			
			acountno = a;
			
			balance = b;
			
		}
		void display(string x, string y)
		{
			name = x;
			accounttype = y;
			cout<<"\nName : "<<x<<"\nAccount Type : "<<y;
		}
		void deposit(double amount)
		{
			cout<<"\nRs."<<amount<<" credited in Your Account";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\nRs."<<amount<<" debited in Your Account";
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\n"<<name<<" Your Current balance is Rs."<<balance;
		}
};
int main()
{
	BankAccount b1;
	b1.display("Hardik","Saving Account");
	b1.set(123456,10000);
	b1.get();
	b1.deposit(5000);
	b1.withdraw(10000);
	b1.get();
	return 0;
}
