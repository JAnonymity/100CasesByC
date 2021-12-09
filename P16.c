#include<stdio.h>

//求最大公约数和最小公倍数

void main()
{
	int m,n,r,i;
	printf("m,n:\n");
	scanf("%d%d",&m,&n);
	
	
	if(m<n)
	{
		r=m;
		m=n;
		n=r;
	}
	
	r=m%n;
	
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	
	printf("zdgys=%d\n",m);
//	int m,n,min,a,b,i,zdgys;
//	printf("m,n:\n");
//	scanf("%d%d",&m,&n);
//	
//	a=m;
//	b=n;
//	
//	if(m<n)
//	{
//		min=m;
//	}
//	else
//	{
//		min=n;
//	}
//	
//	for(i=1;i<=min;i++)
//	{
//		if(m%i==0&&n%i==0)
//		{
//			zdgys=i;
//		}
//	}
//	
//	printf("zdgys=%d,zxgbs=%d\n",zdgys,a*b/zdgys);
}
