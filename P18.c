#include<stdio.h>

//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//��2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

void main()
{
	int sum=0,itemvalue=0;
	int n,a;
	
	printf("a=");
	scanf("%d",&a);
	printf("n=");
	scanf("%d",&n);
	
	while(n>0)
	{
		itemvalue+=a;
		a*=10;
		sum+=itemvalue;
		n--;
	}
	
	printf("sum=%d",sum);
}
