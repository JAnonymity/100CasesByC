#include<stdio.h>

//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

void main()
{
	int x,b,n,time=0;
	scanf("%d",&x);
	n=x;
	while(x>0)
	{
		b=x%10;
		printf("%d\t",b);
		time++;
		x/=10;
	}
	printf("%d��%dλ��",n,time);
	getchar();
}
