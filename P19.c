#include<stdio.h>

//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
//����6=1��2��3������ҳ�1000���ڵ�����������

void main()
{
	int i,j,sum;
	
	for(i=2;i<=1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}
