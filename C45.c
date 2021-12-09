#include<stdio.h>

//学习使用register定义变量的方法。

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
