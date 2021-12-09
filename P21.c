#include<stdio.h>

//猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个。
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
//以后每天早上都吃了前一天剩下的一半零一个。
//到第10天早上想再吃时，见只剩下一个桃子了。
//求第一天共摘了多少

//10-1,9-4,8-10

int getpeach(int day)
{
	if(day==10)
	{
		return 1;
	}
	else
	{
		return (getpeach(day+1)+1)*2;//第九天为第十天的数+1*2 
	}
}


void main()
{
	int i,s=1;
	
	for(i=9;i>=1;i--)
	{
		s=(s+1)*2;
	}
	
	printf("%d",s);
	
	printf("\nfeb=%d",getpeach(1));
}
