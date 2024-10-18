// Write a program of to sort the array using templates. 


#include<stdio.h>
void swap();
int main()
{
	swap();
	return 0;
}
void swap()
{
	int num[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\nAfter Sorting Array = "); 	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
}
