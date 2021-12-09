#include<stdio.h>

//Êä³ö9*9¿Ú¾÷¡£

void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t",j,i,i*j);	
		}
		printf("\n");
	}
}
