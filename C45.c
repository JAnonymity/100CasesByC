#include<stdio.h>

//ѧϰʹ��register��������ķ�����

void main()
{
	register int i;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
	}
	
	printf("sum=%d",sum);
	getchar();
}
