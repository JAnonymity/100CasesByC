#include<stdio.h> 

//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

void main()
{
	int a,n,i,t=0;
	int sum=0;
	printf("������a��n:\n");
	scanf("%d %d",&a,&n);
	
	for(i=1;i<=n;i++)
	{
		t+=a;
		sum+=t;
		a*=10;
	}
	
	printf("sum=%d",sum);
	
}
