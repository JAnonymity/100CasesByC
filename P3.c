#include<stdio.h>
#include<math.h>

//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

void main()
{
	int i;
	int x,y;
	
	for(i=1;i<=10000;i++)
	{
		x=sqrt(i+100);//加上100的数 
		y=sqrt(i+268);//加上168也就是再加上100的数 
		
		if(x*x==(i+100)&&y*y==(i+268))
		{
			printf("%d\n",i);
		}
	}
	
	getchar();
}
