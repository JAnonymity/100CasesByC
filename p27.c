#include<stdio.h>

//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������


int loop(int n)
{
	char next;
	if(n<=1)
	{
		next=getchar();
		putchar(next);
	}
	else
	{
		next=getchar();
		loop(n-1);
		putchar(next);
	}
}

void main()
{
	int i=5;
	printf("����������ַ�:\n");
	loop(i);
	printf("\n");
}
