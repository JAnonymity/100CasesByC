#include<stdio.h>

//809*??=800*??+9*?? 其中??代表的两位数,
//809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。
//求??代表的两位数，及809*??后的结果。

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
