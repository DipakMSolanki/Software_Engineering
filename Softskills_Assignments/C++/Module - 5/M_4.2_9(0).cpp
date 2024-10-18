// Write a Program of Two 1D Matrix Addition using Operator Overloading :

#include<iostream>
using namespace std;

class Matrix_Addition 
{
	private : 
		int arry1[3][3];
		int arry2[3][3];
		int add[3][3];
	public :
		int i;
		int j;
		void get1()
		{
			cout<<"\nEnter Matrix 1 :"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cin>>arry1[i][j];
			}
			
		}	
		
		void get2()
		{
			cout<<"\nEnter Matrix 2 :"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cin>>arry2[i][j];
			}
		}
		
		void display1()
		{
			cout<<"\nMatrix 1 :"<<endl;
			cout<<"{ ";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cout<<arry1[i][j]<<" ";
			}
			cout<<"}";
		}
		
		void display2()
		{
			cout<<"\nMatrix 2 :"<<endl;
			cout<<"{ ";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					cout<<arry2[i][j]<<" ";
			}
			cout<<"}";
		}
		void addition()
		{
			cout<<"\n";
			cout<<"\nAddition of Matrix 1 and Matrix 2 :"<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					add[i][j]=arry1[i][j]+arry2[i][j];
				}
			}
			for(i=0;i<3;i++)
			{	
				for(j=0;j<3;j++)
				{
					cout<<add[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
};

int main()
{
	Matrix_Addition m1;
	m1.get1();
	m1.get2();
	m1.display1();
	m1.display2();
	m1.addition();
	
	return 0;
}
