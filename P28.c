#include<stdio.h>

//����������

//�ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ

//�ʵ�4������������˵�ȵ�3���˴�2�ꡣ

//�ʵ������ˣ���˵�ȵ�2�˴����ꡣ

//�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ

int get_age_repeatedly(int n)
{
	int age;
	if(n==1)
	{
		age=10;
	}
	else
	{
		age=get_age_repeatedly(n-1)+2;
	}
	
	return age;
}

void main()
{
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("%d\n",get_age_repeatedly(i));
	}
}
