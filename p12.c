#include<stdio.h>
#include<math.h>
#include<conio.h>

//判断101到200之间的素数。

void main()
{
	int i,j;
	int time=0;
	
	for(i=101;i<200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}			
		}
		
		if(j>=i)
		{
			printf("%5d",i);
			time++;
			if(time%5==0)
			{
				printf("\n");
			}
		}	
		
	}
	printf("\ntotal=%d",time);
}
