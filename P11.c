#include<stdio.h>

//���ŵ����⣩��������

int fac(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	
	return fac(n-1)+fac(n-2);
}

void main()
{
	int i;
	int f[20];
	int sum=0;
	
	f[0]=1;
	f[1]=1;
	
	printf("%d\n",f[0]);
	printf("%d\n",f[1]);
	
	for(i=2;i<20;i++)
	{	

		f[i]=f[i-2]+f[i-1];	
		printf("%d\n",f[i]);
	}
	
	sum=fac(20);
	
}
