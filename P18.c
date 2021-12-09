#include<stdio.h>

//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

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
