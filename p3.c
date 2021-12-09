#include<stdio.h>
#include<math.h>


//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

//完全平方数概念:一个数的平方根的平方等于这个数
//在100的基础上加上168，就位268 

void main()
{
	int i;
	int a,b;
	for(i=0;i<10000;i++)
	{
		a=sqrt(i+100);
		b=sqrt(i+268);
		
		if(a*a==i+100 && b*b==i+268)
		{
			printf("%d\n",i);
		}
	}
}
