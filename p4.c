#include<stdio.h>
#include<conio.h>

//输入某年某月某日，判断这一天是这一年的第几天？

void main()
{
	int year,month,day,leap;
	int sum=0;
	printf("输入某年某月某日\n");
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	
	//计算总天数 
	switch(month)
	{
		case 1:
			sum=0;
			break;
		case 2:
			sum=31;
			break;
		case 3:
			sum=59;
			break;
		case 4:
			sum=90;
			break;
		case 5:
			sum=120;
			break;
		case 6:
			sum=151;
			break;
		case 7:
			sum=181;
			break;
		case 8:
			sum=212;
			break;
		case 9:
			sum=243;
			break;
		case 10:
			sum=273;
			break;
		case 11:
			sum=304;
			break;
		case 12:
			sum=334;
			break;
		printf("输入错误!");
	}
		
	sum+=day;//加上本月的天数 
	
	if(year%4==0&&year%100!=0 || year%400==0)//判断是否为闰年 
	{
		leap=1;
	}
	
	if(leap==1&&month>2)//是闰年并且月份大于2,总天数加1 
	{
		sum++;
	}
	getchar();
	printf("sum=%d\n",sum);
		
}
