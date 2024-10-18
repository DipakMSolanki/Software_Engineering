/*
	Assume a class cricketer is declared. Declare a derived class batsman from
	cricketer. Data member of batsman. Total runs, Average runs and best performance.
	Member functions input data, calculate average runs, Display data. (Single Inheritance)
*/

#include<iostream>
using namespace std;
class Cricketer
{
	
};
class Batsman : public Cricketer
{
	private: 
		int total_runs;
		int average_runs;
		int best_performance;
		int times_out;
	public:
		void input()
		{
			cout<<"\nEnter Total Runs = ";
			cin>>total_runs;
			cout<<"Enter Best Performance = ";
			cin>>best_performance;
			cout<<"Enter Total Numbers of Out = ";
			cin>>times_out;
		}
		void avg()
		{
			average_runs = total_runs / times_out;
			
		}
		void display()
		{
			cout<<"\nTotal_Runs = "<<total_runs<<endl;
			cout<<"Best Performance = "<<best_performance<<endl;
			cout<<"Average Runs = "<<average_runs<<endl;
		}
};

int main()
{
	Batsman b;
	b.input();
	b.avg();
	b.display();
	return 0;
}
