#include<stdio.h>

//��ӡ�����еġ�ˮ�ɻ�����

void main()
{
	int i,j,k,n;
	for(n=100;n<1000;n++)
	{
		i=n%10;
		j=n/10%10;
		k=n/100%10;
		
		if((i*i*i+j*j*j+k*k*k)==n)
		{
			printf("%d\t",n);
		}
	}
}
