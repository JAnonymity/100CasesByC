#include<stdio.h>

//求一个3*3矩阵对角线元素之和 

void main()
{
	int sum=0;
	int i,j;
	int a[3][3];
	printf("请输入一个3*3矩阵:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j||i+j==2)
			{
				sum+=a[i][j];
			}
		}
	}
	
	printf("sum=%d",sum);
	getchar();
}
