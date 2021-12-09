#include<stdio.h> 
#define N 10
//将一个数组逆序输出。

void main()
{
	int a[N]={0,1,2,3,4,5,6,7,8,9};
	int i,t;
	
	printf("原来数组:\n");
	for(i=0;i<N;i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<N/2;i++)//要拿后面的全部，同前面的交换，所以只能循环一半 
	{
		t=a[i];
		a[i]=a[N-1-i];
		a[N-1-i]=t;
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d",a[i]);
	}
	
//	printf("逆序数组:\n");
//	for(i=N-1;i>0;i--)
//	{
//		printf("%d",a[i]);
//	}
	
	getchar();
}
