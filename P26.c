#include<stdio.h>

//利用递归方法求5!

int factorial(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n*factorial(n-1);
	}
}

void main()
{
	int n,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d!=%d\n",i,factorial(i));
	}
}
