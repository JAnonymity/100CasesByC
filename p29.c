#include<stdio.h>

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

void main()
{
	int x,b,n,time=0;
	scanf("%d",&x);
	n=x;
	while(x>0)
	{
		b=x%10;
		printf("%d\t",b);
		time++;
		x/=10;
	}
	printf("%d是%d位数",n,time);
	getchar();
}
