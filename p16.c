#include<stdio.h>

//��������������m��n���������Լ������С��������


void main()
{
//	int m,n,i;
//	int min;
//	int zdgys,zxgbs;
//	
//	printf("����������������m��n:\n");
//	scanf("%d",&m);
//	scanf("%d",&n);
//	
//	if(m>n)
//	{
//		min=n;
//	}
//	else
//	{
//		min=m;
//	}
//	
//	for(i=2;i<min;i++)
//	{
//		if(m%i==0&&n%i==0)
//		{
//			zdgys=i;
//		}
//		else
//		{
//			zdgys=1;
//		}
//	}
//	
//	zxgbs=m*n/zdgys;
//	
//	printf("zdgys=%d,zxgbs=%d",zdgys,zxgbs);
//	
//	getchar();
	
	
	int t;
	int m,n;
	int num1,num2;
	
	printf("����������������m��n:\n");
	scanf("%d",&m);
	scanf("%d",&n);
	
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	
	num1=m;
	num2=n;
	
	while(num2!=0) 
	{
		t=num1%num2;
		num1=num2;
		num2=t;
	}
		
	printf("zdgys=%d,zxgbs=%d",num1,m*n/num1);
}
