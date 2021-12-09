#include<stdio.h>

//不多于5位数，求是几位数
//一、求它是几位数，二、逆序打印出各位数字

void main()
{
	int time=0,n,m,eachdata;
	
	scanf("%d",&n);
	
	if(m>5)
	{
		printf("请输入一个小于5位的数");
		scanf("%d",&n);		
	}
	
	m=n;
	
	while(m)
	{
		m/=10;
		time++;
	}
	
	printf("time=%d\n",time);
	
	while(n)
	{
		eachdata=n%10;
		printf("%d\t",eachdata);
		n/=10;
	}
	
	
}
