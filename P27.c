#include<stdio.h>

//利用递归函数，将输入的5个字符反向打印字符

void str_reverse(char c[],int n)
{
	if(n==1)
	{
		printf("%c",c[n]);
	}
	else
	{
		printf("%c",c[n]);//否则就输出当前的 
		str_reverse(c,n-1);//继续向前输出 
	}	
//正序 
//	if(n==5) 
//	{
//		printf("%c",c[n]);
//	}
//	else
//	{
//		printf("%c",c[n]);
//		str_reverse(c,n+1);
//	}
}

void main()
{
	char c[5];
	int i;
	
	for(i=1;i<=5;i++)
	{
		c[i]=getchar();
	}
	
	str_reverse(c,5);
}
