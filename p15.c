#include<stdio.h>

//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
int main()
{
	int score;
	char grade;
	printf("������ɼ�:\n");
	scanf("%d",&score);
	grade=(score>=90?'A':score>=60&&score<=90?'B':'C');
	putchar(grade);
	getchar();
	return 0;
}
