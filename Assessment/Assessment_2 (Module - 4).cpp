

#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std; 

int main()
{
	int round, namechoice, comchoice, namescore=0, comscore=0, i;
	string name1, name2="Computer";	
//	Heading : 
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n";
	cout<<"\n\t\tNAME";
	cout<<"\n";
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n";
	
	cout<<"\nEnter Your Name : ";
	cin>>name1;
	cout<<"\n";
	cout<<"\n";
	
//	Numbers of Rounds : 
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n";
	cout<<"\n\t\tROUNDS";
	cout<<"\n";
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
	cout<<"\n";
	cout<<"\n"<<name1<<" How Many Rounds You Want To Play? : ";
	cin>>round;
	cout<<"\n";
	cout<<"\n";
	
// Choice Section : 
	for(i=1;i<=round;i++)
	{
		string name2="Computer";
		cout<<"\n*--*--*--*--*--*--*--*--*--*--*";
		cout<<"\n";
		cout<<"\n\t\tGAME";
		cout<<"\n";
		cout<<"\n*--*--*--*--*--*--*--*--*--*--*";
		cout<<"\n";
		cout<<"\nRound No : "<<i<<"/"<<round;
		cout<<"\n";
		cout<<"\n-* "<<name1<<"'s Score = "<<namescore;
		cout<<"\n";
		cout<<"\n-* "<<name2<<" Score = "<<comscore;	
		cout<<"\n";
		cout<<"\n";
	
	// Options :
		cout<<"\n1) ROCK";	
		cout<<"\n";	
		cout<<"\n2) PAPER";
		cout<<"\n";
		cout<<"\n3) SCISSOR";
		cout<<"\n";
		cout<<"\n";
		
	// User Choice		
		cout<<"\n-> Select Your Choice : ";
		cin>>namechoice;

	// Computer Choice 
		srand(time(0));
		comchoice = (rand()%3)+1;
		cout<<"\n-> Computer Choice Is : "<<comchoice<<endl;
	
			if (namechoice == comchoice)
			{
				cout<<"\nDraw"<<endl;
			}
	
// if User choice Rock 
			else if(namechoice == 1)
			{
				if(comchoice == 2)
				{
		            cout<<"\nYou lose!"<<endl;
			        comscore ++;
			    }
			    if(comchoice == 3)
				{
					cout<<"\nYou win!"<<endl;
					namescore ++;
			    }
			}
	    
// if User chose Paper   
			else if(namechoice == 2)
			{
				if(comchoice == 1)
				{
					cout<<"\nYou win!"<<endl;
					namescore ++;
			    }
				if(comchoice == 3)
				{
					cout<<"\nYou lose!"<<endl;
					comscore ++;
			    }
			}
	    
// if User Chose Scissor 
			else if(namechoice == 3)
			{
				if(comchoice == 1)
				{
			    	cout<<"\nYou lose!"<<endl;
					comscore ++;
			    }
				if(comchoice == 2)
				{
			    	cout<<"\nYou win!"<<endl;
			    	namescore ++;
			    }
			}
    		
    		else 
    		{
    			return 0;
			}
	
}
cout<<"\nPress Any Key To Continue..."<<endl;

	if(namescore>comscore)
	{
		cout<<"\n"<<name1<<" is Winner!";
	}
	else if(namescore<comscore)
	{
		cout<<"\n"<<name2<<" is Winner!";
	}
	else
	{
		cout<<"\nGame Is Drawn";
	}
	
	
	return 0;
}
