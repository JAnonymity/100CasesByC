#include<stdio.h>

//�������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ�

//�����һ����ĸһ�������ж����������if����жϵڶ�����ĸ

void main()
{
	char c;
	
	c=getchar();
	
	switch(c)
	{
		case 'M':
			printf("Monday!");
			break;
		case 'W':
			printf("Wednesday!");
			break;
		case 'F':
			printf("Friday!");
			break;
		case 'T':
			{
				printf("Input the next letter!\n");
				c=getchar();
				if(c=='u')
				{
					printf("Tuesday!");
				}
				else if(c=='h')
				{
					printf("Thursday!");				
				}
				break;
			}			
		case 'S':
			{
				printf("Input the next letter!\n");
				c=getchar();
				if(c=='a')
				{
					printf("Satursday!");
				}
				else if(c=='u')
				{
					printf("Sunday!");				
				}
				break;
			}				
	}
}
