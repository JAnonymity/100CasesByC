#include<stdio.h>

//对10个数进行排序。

void main()
{
	int a[10];
	int i,j,t;
	printf("请输入十个数:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("排序前数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
//	冒泡法 
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<9-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//		}
//	}
	printf("\n");
	printf("排序后数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
