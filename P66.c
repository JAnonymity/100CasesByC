#include<stdio.h>

//输入3个数a,b,c，按大小顺序输出(指针)

void swap(int *x,int *y)//指针变量存放的是一个变量的地址 
{
	int p;
	//交换所指向变量的值 
	p=*x;
	*x=*y;
	*y=p;
}


void main()
{
	int a,b,c;
	
	int *pointer_1,*pointer_2,*pointer_3;
	
	scanf("%d%d%d",&a,&b,&c);
	
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	
	if(a<b)
	{
		swap(pointer_1,pointer_2);//因此这里需要传的是指针所指向的变量的地址 
	}
	
	if(a<c)
	{
		swap(pointer_1,pointer_3);
	}
	
	if(b<c)
	{
		swap(pointer_2,pointer_3);
	}
	
	printf("%d,%d,%d",a,b,c);
}
