#include<stdio.h> 

//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

void main()
{
	float a=2.0,b=1.0,c,sum=0;	
	int i;
	
	for(i=0;i<20;i++)
	{
		sum+=a/b;
		c=a+b;
		b=a;
		a=c;		
	}
	
	printf("%5f\n",sum);
		
}


