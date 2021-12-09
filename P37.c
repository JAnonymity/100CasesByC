#include<stdio.h>

//对10个数进行排序

void main()
{
	int i,j,t,min,a[10];
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		min=i;//第一个默认最小 
		for(j=i+1;j<10;j++)
		{
			if(a[min]>a[j])
			{
				min=j; 				
			}
		}
		if(min!=i)//只要最小值有变化,那么就交换 
		{
			printf("min=%d,i=%d\n",min,i); 
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}	
}
