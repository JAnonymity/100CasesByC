#include<stdio.h>
#define N 5

//�������
//��n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����

void main()
{
	int num[N];
	int m,i,j;
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	
	scanf("%d",&m);
	
	if(m>0)
	{
		for(i=1;i<=N;i++)
		{
			num[i-1]=num[i];
		}
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d\t",num[i]);
	}
}
