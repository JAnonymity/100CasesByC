#include<stdio.h> 

//编写一个函数，输入n为偶数时,调用函数求1/2+1/4+...+1/n
//当输入n为奇数时,调用函数1/1+1/3+...+1/n(利用指针函数)。

double *get_evennum(int n)
{
	double sum=0;
	int i;
	for(i=2;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
	
	return &sum;
}

double *get_oddnum(int n)
{
	double sum=0;
	int i;
	for(i=1;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
	
	return &sum;
}

void main()
{
	int n;
	int *p1,*p2;
	scanf("%d",&n);
	
	if(n%2==0)
	{
		p1=get_evennum(n);
		printf("%f",*p1);
	}
	else
	{
		p2=get_oddnum(n);
		printf("%f",*p2);
	}
	
}
