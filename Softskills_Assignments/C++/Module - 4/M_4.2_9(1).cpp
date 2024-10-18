// Write a Program of Two 1D Matrix Addition using Operator Overloading :
 
#include<iostream>
using namespace std;
class M_Addition
{
	private :
		int matrix1;
		int matrix2;
	public :	
		M_Addition()
		{
			matrix1 = 0;
			matrix2 = 0;	
		}	
		M_Addition(int m1,int m2)
		{
			matrix1 = m1;
			matrix2 = m2;
		}
		M_Addition operator+(M_Addition obj)
		{
			M_Addition temp;
			temp.matrix1 = matrix1 + obj.matrix1;
			temp.matrix2 = matrix2 + obj.matrix2;
			return temp;
		}
		void display()
		{
			cout<<"\nMatrix 1 = "<<matrix1;
			cout<<"\nMatrix 2 = "<<matrix2;
		}
};
int main()
{
//	int x=10;
//	int y=20;
//	int z = x+y;
//	cout<<z;

	
//	M_Addition d1;
	M_Addition d2(15,50);
	M_Addition d3(35,25);
	M_Addition d4;
	
	cout<<"\nMatrix 1 and Matrix 2 :";
//	d1.display();
	d2.display();
	d3.display();
//	d4.display();
	cout<<"\n";
	
	cout<<"\nAddition of Matrix 1 and Matrix 2 :";
	d4 = d2 + d3;
	d4.display();
	return 0;
}
