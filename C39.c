#include<stdio.h>

//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

void main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100};
	int num,i,j,t,end;
	scanf("%d",&num);

	a[10]=num;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<11;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}	
		}
	}
		
	for(i=0;i<11;i++)
	{
		printf("%d\t",a[i]);
	}
	
	getchar();
}
