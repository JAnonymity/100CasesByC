#include<stdio.h>

//删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母

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
