#include<stdio.h>
#include<conio.h>

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

void main()
{
	int year,month,day,leap;
	int sum=0;
	printf("����ĳ��ĳ��ĳ��\n");
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	
	//���������� 
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
		printf("�������!");
	}
		
	sum+=day;//���ϱ��µ����� 
	
	if(year%4==0&&year%100!=0 || year%400==0)//�ж��Ƿ�Ϊ���� 
	{
		leap=1;
	}
	
	if(leap==1&&month>2)//�����겢���·ݴ���2,��������1 
	{
		sum++;
	}
	getchar();
	printf("sum=%d\n",sum);
		
}
