#include<stdio.h>

//���ַ����ĳ���

int get_Strlength(char *p)
{
	int i,n;
	
	while(p[i]!='\0')
	{
		i++;
		n++;
	}
	
	return n;
}

void main()
{
	char str[20];
	int i=0,length;
	
	gets(str);
	
	length=get_Strlength(str);
	
	printf("length=%d",length);
}
