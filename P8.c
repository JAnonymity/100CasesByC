#include<stdio.h>

//���9*9�ھ�

void main()
{
	int i,j;
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)//ʹ��i�е��������С�ڵ���i 
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
