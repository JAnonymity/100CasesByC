#include<stdio.h>

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

void main()
{
	char c;
	int alpha=0,space=0,num=0,others=0;
	
	while((c=getchar())!='\n')
	{
		if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		{
			alpha++;
		}
		else if(c>='0'&&c<='9')
		{
			num++;
		}
		else if(c==' ')
		{
			space++;
		}
		else
		{
			others++;
		}
	}
	
	printf("alpha=%d,space=%d,num=%d,others=%d\n",alpha,space,num,others);
}
