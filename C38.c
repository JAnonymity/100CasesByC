#include<stdio.h>

//��һ��3*3����Խ���Ԫ��֮�� 

void main()
{
	int sum=0;
	int i,j;
	int a[3][3];
	printf("������һ��3*3����:\n");
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
