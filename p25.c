#include<stdio.h>

//��1+2!+3!+...+20!�ĺ͡�

void main()
{
	int i;
	float sum=0,p=1;
	for(i=1;i<=20;i++)
	{
		p*=i;
		sum+=p;
	}
	printf("sum=%f\n",sum);
}
