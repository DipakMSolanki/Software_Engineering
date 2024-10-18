// Write a program to swap the two numbers using friend function without using third variable : 

#include<iostream>
using namespace std;
class Swap
{
	private : 
		int x = 20;
		int y = 40;
		
	public : 
		friend void display(Swap &obj);
		void display()
		{
			x = x + y;
			y = x - y;
			x = x - y;	
			cout<<"\nAfter Swaping : "<<endl;
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};

void display(Swap &obj)
{	
	cout<<"\nBefore Swaping :"<<endl;
	cout<<"x = "<<obj.x<<endl;
	cout<<"y = "<<obj.y<<endl;
}

int main()
{
	Swap s1;
	display(s1);
	s1.display();
	return 0;
}
