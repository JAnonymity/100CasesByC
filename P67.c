#include<stdio.h>

//���齻��,�����������ͺ͵�һ��������,�������С���ͺ����һ������ 

void max_min(int array[10])
{
	int i;
	
	for(i=0;i<10;i++)
	{
		if(array[i]>array[0])
		{
			swap(&array[i],&array[0]);
		}
	}
	
	for(i=0;i<10;i++)
	{
		if(array[i]<array[9])
		{
			swap(&array[i],&array[9]);
		}
	}
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}


void main()
{
	int a[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max_min(a);
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
