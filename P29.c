#include<stdio.h>

//������5λ�������Ǽ�λ��
//һ�������Ǽ�λ�������������ӡ����λ����

void main()
{
	int time=0,n,m,eachdata;
	
	scanf("%d",&n);
	
	if(m>5)
	{
		printf("������һ��С��5λ����");
		scanf("%d",&n);		
	}
	
	m=n;
	
	while(m)
	{
		m/=10;
		time++;
	}
	
	printf("time=%d\n",time);
	
	while(n)
	{
		eachdata=n%10;
		printf("%d\t",eachdata);
		n/=10;
	}
	
	
}
