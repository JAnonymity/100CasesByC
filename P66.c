#include<stdio.h>

//����3����a,b,c������С˳�����(ָ��)

void swap(int *x,int *y)//ָ�������ŵ���һ�������ĵ�ַ 
{
	int p;
	//������ָ�������ֵ 
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
		swap(pointer_1,pointer_2);//���������Ҫ������ָ����ָ��ı����ĵ�ַ 
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
