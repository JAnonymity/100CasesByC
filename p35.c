#include<stdio.h>

//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��

void main()
{
	char s[]="www.runoob.com";
	int i,j,time=0;
	for(i=0;s[i]!='\0';i++)
	{
		time++;
	}
	
	for(j=time;j>=0;j--)
	{
		printf("%c",s[j]);
	}
}
