#include<stdio.h>

//�ж�һ�������Ƿ�Ϊ������

void main()
{
	int num,i,flag=0;
	printf("������һ����:\n");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	{
		if(num%i!=0)
		{
			printf("Yes");
			break;
		}
		else
		{
			printf("no!");
			break;
		}
	}
	
}
