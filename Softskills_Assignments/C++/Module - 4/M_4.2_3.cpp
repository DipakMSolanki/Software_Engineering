// Write a program to find the cubic values using inline function : 

#include<iostream>
using namespace std;
inline int cube(int num) {return num*num*num;};	

int main()
{
	cout<<"\nCube is = "<<cube(3);	
	return 0;
}
