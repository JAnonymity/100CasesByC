#include<stdio.h> 

//��дһ������������nΪż��ʱ,���ú�����1/2+1/4+...+1/n
//������nΪ����ʱ,���ú���1/1+1/3+...+1/n(����ָ�뺯��)��

double *get_evennum(int n)
{
	double sum=0;
	int i;
	for(i=2;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
	
	return &sum;
}

double *get_oddnum(int n)
{
	double sum=0;
	int i;
	for(i=1;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
	
	return &sum;
}

void main()
{
	int n;
	int *p1,*p2;
	scanf("%d",&n);
	
	if(n%2==0)
	{
		p1=get_evennum(n);
		printf("%f",*p1);
	}
	else
	{
		p2=get_oddnum(n);
		printf("%f",*p2);
	}
	
}
