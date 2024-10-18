// Write a program of to swap the two values using templates : 

#include<stdio.h>
void swap();
int main()
{
	swap();
	return 0;
}
void swap()
{
	int a = 10,b = 20,temp;
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);
	temp = a;
	a = b;
	b = temp;
	printf("\n");
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
}

