// Write a program of to swap the two values using templates 

#include<iostream>
using namespace std;
template <typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a=52;
	int b=45;
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	swapvalues(a,b);
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	cout<<"\n";
	
	float p=65.44;
	float q=19.36;
	cout<<"\nValue of p before swapping = "<<p;
	cout<<"\nValue of q before swapping = "<<q;
	swapvalues(p,q);
	cout<<"\nValue of p after swapping = "<<p;
	cout<<"\nValue of q after swapping = "<<q;
	cout<<"\n";
	
	char x='S';
	char y='D';
	cout<<"\nValue of x before swapping = "<<x;
	cout<<"\nValue of y before swapping = "<<y;
	swapvalues(x,y);
	cout<<"\nValue of x after swapping = "<<x;
	cout<<"\nValue of y after swapping = "<<y;
	return 0;
}
