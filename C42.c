#include<stdio.h> 

//学习使用auto定义变量的用法。

void main()
{
	int i=1,s=0,c=0;
	for(i=0;i<3;i++)
	{
		s++;
		for(i=0;i<5;i++)
		{
			c++;
			printf("c=%d",c);
		}
		
	}
	
	printf("s=%d",s);
	
	
}
