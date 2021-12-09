#include<stdio.h>
#define N 3
//求一个3*3矩阵对角线元素之和

void main()
{
	int i,j,sum=0;
	int a[N][N];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j||i+j==N-1)
			{
				sum+=a[i][j];
			}
		}
	}
	
	printf("sum=%d\n",sum);
}
