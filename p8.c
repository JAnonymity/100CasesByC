#include<stdio.h>

//���9*9�ھ���

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