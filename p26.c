#include<stdio.h>

//利用递归方法求5!。

int digui(int n)
{
	if(n==1)
	{
		return 1;
	}
	return digui(n-1)*n;
}

void main()
{
	int i,p=1;
	for(i=1;i<=5;i++)
	{
		p*=i;
	}
	printf("p=%d\n",p);
//	printf("p=%d\n",digui(5));
}
