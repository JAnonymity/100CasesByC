#include<stdio.h>

//输入星期几的第一个字母来判断一下是星期几

//如果第一个字母一样，则判断用情况语句或if语句判断第二个字母

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
