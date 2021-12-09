#include<stdio.h> 

//学习static定义静态变量的用法。

static int num=1;


void setvalue()
{
	int x=1;
	x++;
	printf("x=%d",x);
	num++;
}

void main()
{
	int i;
	for(i=0;i<3;i++)
	{
		setvalue();
	}
		
	printf("num=%d",num);
}
