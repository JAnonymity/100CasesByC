#include<stdio.h>

//输入某年某月某日，判断这一天是这一年的第几天？

void main()
{
	int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//多写一个方便标号 
	int year,month,day;
	int i,j,sign=0,days=0;
	
	printf("year=");
	scanf("%d",&year);
	
	printf("month=");
	scanf("%d",&month);
	
	printf("day=");
	scanf("%d",&day);
	
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		sign=1;
	}
	
	for(i=0;i<month;i++)
	{
		days+=months[i];
	}
	
	days+=day;
	
	if(sign==1)
	{
		days++;
	}
	
	printf("%d.%d is the %d day in %d\n",month,day,days,year);
	
}
