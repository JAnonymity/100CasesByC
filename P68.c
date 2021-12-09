#include<stdio.h>
#define N 5

//数组后移
//有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数

void main()
{
	int num[N];
	int m,i,j;
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	
	scanf("%d",&m);
	
	if(m>0)
	{
		for(i=1;i<=N;i++)
		{
			num[i-1]=num[i];
		}
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d\t",num[i]);
	}
}
