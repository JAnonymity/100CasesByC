#include<stdio.h>

//������������x,y,z���������������С���������

void main()
{
	int x,y,z;
	int t;
	printf("��������������x,y,z:\n");
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
