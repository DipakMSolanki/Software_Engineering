// Write a program of to sort the array using templates. 

#include<iostream>
using namespace std;
template<typename T,int size>
void sortarr(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5] = {15,12,14,11,13};
	char b[5] = {'Y','Z','D','M','S'};
	float c[3] = {56.75,84.12,47.35};
	
	sortarr(a);
	sortarr(b);
	sortarr(c);
	
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<3;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
