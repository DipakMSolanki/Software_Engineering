// WAP to create simple calculator using class : 

#include<iostream>
using namespace std;

class SimCalculator
{
	private :
		int a, b, result;
		float x, y, result2;
	
	public : 
		void additions (int a, int b)
		{
			result = a + b;
			cout<<"\nAdditions of "<<a<<" and "<<b<<" = "<<result<<endl;
		}
		void subtraction (int a, int b)
		{
			result = a - b;
			cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<result<<endl;
		}
		void multiplication(int a, int b)
		{
			result = a * b;
			cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<result<<endl;
		}
		void divison(int x, int y)
		{
			result2 = x / y;
			cout<<"Divison of "<<x<<" and "<<y<<" = "<<result2<<endl;
		}
		void remainder(int a, int b)
		{
			result = a % b;
			cout<<"Remainder of "<<a<<" and "<<b<<" = "<<result<<endl;
		}
		
};

int main()
{
	SimCalculator c1;
	c1.additions(20,30);
	SimCalculator c2;
	c2.subtraction(50, 10);
	SimCalculator c3;
	c3.multiplication(34, 60);
	SimCalculator c4;
	c4.divison(108, 12);
	SimCalculator c5;
	c5.remainder(56, 9);
	return 0;
}
