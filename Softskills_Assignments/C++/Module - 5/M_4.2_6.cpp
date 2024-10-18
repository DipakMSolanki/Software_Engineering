/*
	Create a class person having members name and age. Derive a class student having member percentage. 
	Derive another class teacher having member salary. 
	Write necessary member function to initialize, read and write data.
	Write also Main function (Multiple Inheritance)
*/

#include<iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
	
	public:
		string n1;
		int a1;
		void per()
		{	
			cout<<"\nEnter Your Name : ";
			cin>>name;
			n1 = name;
			
			cout<<"\nEnter Your Age : ";
			cin>>age;
			a1 = age;
		}
};

class Student 
{
	private:
		double percentage;
		
	public:
		double prct;
		void std()
		{
			cout<<"\nEnter Your Percentage = ";
			cin>>percentage;
			prct=percentage;
		}
	
};

class Teacher : public Person,public Student 
{
	private:
		int salary;
		
	public:
		int salar;
		void sal()
		{
			cout<<"\nEnter Your Salary = ";
			cin>>salary;
			salar=salary;
			
			cout<<"\nYour Name is "<<n1<<". Your Age is "<<a1<<".";
			cout<<"\nPercentage is "<<prct<<"%";
			cout<<"\nSalary is Rs. "<<salar;
		}
	
};

int main()
{
	Teacher t1;
	t1.per();
	t1.std();
	t1.sal();

	return 0;
}
