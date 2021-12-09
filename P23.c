#include<stdio.h>

//打印出如下图案（菱形）

void main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=0;k<=4-2*i;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
