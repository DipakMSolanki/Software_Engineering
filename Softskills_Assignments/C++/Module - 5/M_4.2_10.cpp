// Write a program to concatenate the two strings using Operator Overloading 

#include<iostream>
using namespace std;

class Swaping
{
	public : 
		swap (int a, int b)
		{
			int x;
			cout<<"\nValues Before Swaping"<<endl;
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"\nValues After Swaping"<<endl;
			x = a;
			a = b;
			b = x;
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
	
};

int main()
{
	Swaping s1;
	s1.swap(10,20);
	return 0;
}
