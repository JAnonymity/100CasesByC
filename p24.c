#include<stdio.h>

//��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

void main()
{
	float a=2,b=1,sum=0,t;
	int i;
	for(i=0;i<20;i++)
	{
		sum+=a/b;
		t=a;
		a=a+b;
		b=t;
	}
	
	printf("sum=%f\n",sum);
}


