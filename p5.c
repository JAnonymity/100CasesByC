#include<stdio.h>

//输入三个整数x,y,z，请把这三个数由小到大输出。

void main()
{
	int x,y,z;
	int t;
	printf("请输入三个整数x,y,z:\n");
	scanf("%d,%d,%d",&x,&y,&z);
	
	if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	
	if(x>z)
	{
		t=x;
		x=z;
		z=t;
	}
	
	if(y>z)
	{
		t=y;
		y=z;
		z=t;
	}
	
	printf("%d %d %d",x,y,z);
}
