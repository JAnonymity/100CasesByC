#include<stdio.h>

int getfabi(float n)
{
	if(n == 1|| n == 2)
	{
		return 1;
	}
	return getfabi(n-1)+fabi(n-2);
} 


void main()
{
	float n,sum=0;
	int i;
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		sum+=getfabi(n)/getfabi(n-1);
	}
	
	printf("sum=%d\n",sum);
	
}
