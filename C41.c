#include<stdio.h> 

//ѧϰstatic���徲̬�������÷���

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
