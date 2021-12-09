#include<stdio.h>
#include<string.h>
//×Ö·û´®ÅÅÐò

void swap(char *s1,char * s2)
{
	char temp[20];
	strcpy(temp,s1);
	strcpy(s1,s2);
	strcpy(s2,temp);
}

void main()
{
	char s1[50],s2[50],s3[50];
	
	gets(s1);
	gets(s2);
	gets(s3);
	
	if(strcmp(s1,s2)>0)
	{
		swap(s1,s2);
	}
	else if(strcmp(s2,s3)>0)
	{
		swap(s2,s3);
	}
	else if(strcmp(s3,s1)>0)
	{
		swap(s3,s1);
	}
	
	printf("%s\n%s\n%s\n",s1,s2,s3);
}
