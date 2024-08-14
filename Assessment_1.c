// Write a Program to make multiplication of 2-D Matrix.

#include<stdio.h>
int main()
{
	int m1[100][100], m2[100][100], ans[100][100];
	int i, j, k, row = 2, col = 2;
	char choice;

// Heading	
	printf("\t\t\t\tMatrix Multiplication\n");

// Heading 	
	printf("\n--------------Matrix: 1--------------\n");
	printf("\n");
	
//	Input Elements of Matrix: 1
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n");

//	Print Matrix: 1 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	printf("\n");
	
	printf("\n--------------Matrix: 2--------------\n");
	printf("\n");
	
//	Input Elements of Matrix: 2 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\n");
	
//	Print Matrix: 2 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");

// Heading
	printf("\n--------------Result : Multiplication Matrix--------------\n");
	
// Multiplication 
	for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = 0;
					for(k=0;k<col;k++)
					{
						ans[i][j] = ans[i][j] + (m1[i][k]*m2[k][j]);
					}
				}
			}
			printf("\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d\t",ans[i][j]);
				}
				printf("\n");
			}
	
	return 0;
	
}
