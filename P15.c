#include<stdio.h>

//ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ

void main()
{
	int score;
	char rank;
	
	scanf("%d",&score);
	
	if(score>=90)
	{
		rank='A';
	}
	else if(score>=60)
	{
		rank='B';
	}
	else
	{
		rank='C';
	}
	
	printf("%d rank is %c",score,rank);
}
