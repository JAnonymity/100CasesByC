#include<stdio.h>

//809*??=800*??+9*?? ����??�������λ��,
//809*??Ϊ��λ����8*??�Ľ��Ϊ��λ����9*??�Ľ��Ϊ3λ����
//��??�������λ������809*??��Ľ����

void main()
{
	int result,doublenum,n=809;
	int i;
	for(i=10;i<100;i++)
	{
		result=n*i;
		if(result%10000==result && 8*i%100==8*i &&9*i>=100)
		{
			printf("809*%d=800*%d+9*%d=%d",i,i,i,result);
		}
	}
}
