#include<stdio.h>
#define N 10

//将一个数组逆序输出

void main()
{
	int a[N]={1,2,3,4,5,6,7,8,9,10};
	int i,t;
	
//	for(i=N-1;i>=0;i--)
//	{
//		printf("%d\t",a[i]);
//	}
	
	for(i=0;i<N/2;i++)
	{
		t=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=t;
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
}
