#include<stdio.h>

//ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ

void main()
{
	char c[]="I want to learn English";
	char n,i,j;
	n=getchar();
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]!=n)
		{
			c[j]=c[i];
			j++;
		}
	}
	
	c[j]='\0';
	
	for(i=0;c[i]!='\0';i++)
	{
		printf("%c",c[i]);
	}
}
