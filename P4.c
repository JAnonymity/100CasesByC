#include<stdio.h>

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

void main()
{
	int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//��дһ�������� 
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
