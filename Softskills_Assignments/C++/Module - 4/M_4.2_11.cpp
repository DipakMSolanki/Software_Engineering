/* 
	Write a program to calculate the area of circle, rectangle and triangle using Function Overloading : 
		--> Rectangle: Area * breadth 
		--> Triangle: ½ *Area* breadth 
		--> Circle: Pi * Area *Area 

*/

#include<iostream>
using namespace std;
class Shape
{
	public :
		void shape(string n,int l,int b)// Rectangle
		{
			cout<<"\nArea of "<<n<<" is = "<<l*b;
		}
		void shape(string n,double base,double height)// Triangle
		{
			cout<<"\nArea of "<<n<<" is = "<<0.5*(base*height);
		}
		void shape(string n,double r)// Circle
		{
			cout<<"\nArea of "<<n<<" is = "<<3.14*(r*r);
		}
};

int main()
{
	Shape s1;
	s1.shape("Recatangle",4,5);
	Shape s2;
	s2.shape("Triangle",4.5,7.5);
	Shape s3;
	s3.shape("Circle",4.8);
	return 0;
}
