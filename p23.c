#include<stdio.h>

//打印出图案（菱形）

void main()
{
	int i,j,k;
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2-i;j++)//3空格2空格1空格0空格 
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=i;j++)//1空格2空格3空格 
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
