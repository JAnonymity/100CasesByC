#include<stdio.h>

//����һ�������������䷴ת�������

void main()
{
	int n,left_num,reverse_num=0;
	
	printf("n=");
	scanf("%d",&n);
	
	while(n)
	{
		left_num=n%10;
		reverse_num=reverse_num*10+left_num;
		n/=10;
	}
	
	printf("reverse_num=%d\n",reverse_num);
}
