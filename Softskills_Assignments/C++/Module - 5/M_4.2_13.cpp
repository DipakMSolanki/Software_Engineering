// Write a program to find the max number from given two numbers using friend function : 

#include<iostream>
using namespace std;
class Max
{
	private : 
		int x = 50;
		int y = 80;
		
	public : 
		friend void display(Max &obj);
};

void display(Max &obj)
{	
	cout<<"\n"<<"x = "<<obj.x;
	cout<<"\n"<<"y = "<<obj.y<<endl;
	if(obj.x>obj.y)
	{
		cout<<"\n"<<obj.x<<" is Maximum Number.";
	}	
	else
	{
		cout<<"\n"<<obj.y<<" is Maximum Number.";
	}
}

int main()
{
	Max m1;
	display(m1);
	return 0;
}
