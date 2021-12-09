#include<stdio.h>

//判断一个数字是否为质数。

void main()
{
	int num,i,flag=0;
	printf("请输入一个数:\n");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	{
		if(num%i!=0)
		{
			printf("Yes");
			break;
		}
		else
		{
			printf("no!");
			break;
		}
	}
	
}
