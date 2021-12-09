#include<stdio.h> 

//求100之内的素数。

void main()
{
	int i,j;
	for(i=1;i<=100;i++)	
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>=i)
		{
			printf("%d\n",i);
		}
	}
}
