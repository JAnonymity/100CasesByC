#include<stdio.h> 

//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

void main()
{
	int a,n,i,t=0;
	int sum=0;
	printf("请输入a和n:\n");
	scanf("%d %d",&a,&n);
	
	for(i=1;i<=n;i++)
	{
		t+=a;
		sum+=t;
		a*=10;
	}
	
	printf("sum=%d",sum);
	
}
