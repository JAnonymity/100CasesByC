#include<stdio.h>

//输出9*9口诀

void main()
{
	int i,j;
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)//使第i行的输出列数小于等于i 
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
