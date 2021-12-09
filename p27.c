#include<stdio.h>

//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。


int loop(int n)
{
	char next;
	if(n<=1)
	{
		next=getchar();
		putchar(next);
	}
	else
	{
		next=getchar();
		loop(n-1);
		putchar(next);
	}
}

void main()
{
	int i=5;
	printf("请输入五个字符:\n");
	loop(i);
	printf("\n");
}
