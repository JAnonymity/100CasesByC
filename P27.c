#include<stdio.h>

//���õݹ麯�����������5���ַ������ӡ�ַ�

void str_reverse(char c[],int n)
{
	if(n==1)
	{
		printf("%c",c[n]);
	}
	else
	{
		printf("%c",c[n]);//����������ǰ�� 
		str_reverse(c,n-1);//������ǰ��� 
	}	
//���� 
//	if(n==5) 
//	{
//		printf("%c",c[n]);
//	}
//	else
//	{
//		printf("%c",c[n]);
//		str_reverse(c,n+1);
//	}
}

void main()
{
	char c[5];
	int i;
	
	for(i=1;i<=5;i++)
	{
		c[i]=getchar();
	}
	
	str_reverse(c,5);
}
