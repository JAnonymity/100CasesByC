#include<stdio.h>
#define N 100
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

int main()
{
	char c;
	int i;
	char str[N];
	int letters=0,space=0,num=0,others=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c=str[i];
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			letters++;
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
	
	printf("letters=%d,space=%d,num=%d,others=%d",letters,space,num,others);
	
	return 0;
}


//void main()
//{
//	char c;
//	int letters=0,space=0,num=0,others=0;
//	printf("输入一行字符:\n");
//	
//	while((c=getchar())!='\n')
//	{
//		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//		{
//			letters++;
//		}
//		else if(c>='0'&&c<='9')
//		{
//			num++;
//		}
//		else if(c==' ')
//		{
//			space++;
//		}
//		else
//		{
//			others++;
//		}
//	}
//	
//	printf("letters=%d,space=%d,num=%d,others=%d",letters,space,num,others);
//}
