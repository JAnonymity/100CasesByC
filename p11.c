#include<stdio.h>

//���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....�����¸�������������֮�ͣ��ӵ������¿�ʼ����

void main()
{
	int f1=1;
	int f2=1;
	int i;
	
	for(i=1;i<=20;i++)
	{
		printf("%12d %12d",f1,f2);
		
		if(i%2==0)
		{
			printf("\n");
		}	
		f1=f1+f2;
		f2=f1+f2;
	}
}
