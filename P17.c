#include<stdio.h>

//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

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
