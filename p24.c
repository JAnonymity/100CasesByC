#include<stdio.h>

//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

void main()
{
	float a=2,b=1,sum=0,t;
	int i;
	for(i=0;i<20;i++)
	{
		sum+=a/b;
		t=a;
		a=a+b;
		b=t;
	}
	
	printf("sum=%f\n",sum);
}


