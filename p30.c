#include<stdio.h>

//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

void main()
{
	int num;
	int a,b,c,d,e;
	scanf("%d",&num);
	a=num/10000;
	b=num/1000%10;
	c=num/100%10;
	d=num/10%10;
	e=num%10;
	
	if(e==a&&d==b)
	{
		printf("%d�ǻ�����",num);
	}
	else
	{
		printf("%d���ǻ�����",num);
	}
	
	getchar();
}
