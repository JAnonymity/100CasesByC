#include<stdio.h>
#include<math.h>
//�˽���ת��Ϊʮ����

int get_otc(int n)
{
	int i=0,sum=0,left;
	
	while(n)
	{
		left=n%10;
		sum+=left*pow(8,i++);//��������,���α��˵�һ�� 
		n/=10;
	}
	return sum;
}

void main()
{
//	int n;
//	scanf("%d",&n);
//	printf("%d",get_otc(n));
	char c[10];
	int i=0,sum=0;
	
	while((c[i]=getchar())!='\n')
	{
		sum=sum*8+(c[i++]-'0');
	}
	
	printf("sum=%d",sum);
}
