// Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include<iostream>
using namespace std;

class Calculator
{
	public :
		Calculator(int x, int y)
		{
			cout<<"\nValue1 : "<<x;
			cout<<"\nValue2 : "<<y;
			
			cout<<"\nAddition = "<<x+y;
			cout<<"\nSubtraction = "<<x-y;
			cout<<"\nDivision = "<<x/y;
			cout<<"\nMultiplication = "<<x*y;
		}
};
int main()
{
	Calculator c1(25,5);
	return 0;
}

