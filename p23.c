#include<stdio.h>

//��ӡ��ͼ�������Σ�

void main()
{
	int i,j,k;
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2-i;j++)//3�ո�2�ո�1�ո�0�ո� 
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
		for(j=0;j<=i;j++)//1�ո�2�ո�3�ո� 
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
