/*
	Assume that the test results of a batch of students are stored in three different classes. 
	Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and 
	class result contains the total marks obtained in the test. 
	The class result can inherit the details of the marks obtained in the test and 
	roll number of students. (Multilevel Inheritance)
*/

#include<iostream>
using namespace std;
class Student
{
	public :
		Student() // Parent Constructor 
		{
			cout<<"\nRoll Number = 101";
		}
};
class Test : public Student
{
	public :
		Test() // Child Constructor 
		{
			cout<<"\nTotal Marks of Subject 1 = 82";
			cout<<"\nTotal Marks of Subject 2 = 75";
		}
};
class Result : public Test
{
	public :
		Result()
		{
			cout<<"\nTotal Marks = 157";
		}
};
int main()
{
//	Parent p1;
//	Child c1;
	Result t1;
	return 0;
}
