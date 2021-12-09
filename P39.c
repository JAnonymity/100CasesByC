#include<stdio.h>

//现输入一个数，要求按原来的规律将它插入数组中。

void main()
{
	int i,j,n;
	int a[11]={10,20,30,40,50,60,70,80,90,100};
	
	scanf("%d",&n);
	
	//数比最后一个数还大 
	if(n>a[9])
	{
		a[10]=n;
	}
	//数比第一个数还小
	else if(n<a[0])
	{
		for(i=0;i<10;i++)
		{
			for(j=10;j>=i+1;j--)//i+1是因为本数呆的位置不能向后移 
			{
				a[j]=a[j-1];
			}
			a[i]=n;
			break;
		}
	}
	else
	{
		for(i=0;i<10;i++)
		{
			if(n>a[i]&&n<=a[i+1])//给定范围 
			{
				for(j=10;j>=i+1;j--)//在范围里移位 
				{
					a[j]=a[j-1];
				}
			}
			a[i+1]=n;
			break;
		}
	}
	
	for(i=0;i<11;i++)
	{
		printf("%d\t",a[i]);
	}
}
