/*
	Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of 
	two number using different parameters and Function Overloading.
*/

#include<iostream>
using namespace std;

class Mathematic_Operation 
{
	public : 
		void Addition(int a, int b) // Addition
		{
			cout<<"\nAddition of a and b = "<<a+b<<endl;
		}
		void Subtraction(int a, int b) // Subtraction 
		{
			cout<<"Subtraction of a and b = "<<a-b<<endl;
		}
		void Multiplication(int a, int b)
		{
			cout<<"Multiplication of a and b = "<<a*b<<endl;
		}
		void Division(double a, double b)
		{
			cout<<"Division of a and b = "<<a/b<<endl;
		}
};

int main()
{
	Mathematic_Operation m1;
	m1.Addition(20,30);
	Mathematic_Operation m2;
	m2.Subtraction(30,20);
	Mathematic_Operation m3;
	m3.Multiplication(20,30);
	Mathematic_Operation m4;
	m4.Division(30,20);
	return 0;
}
