#include<stdio.h>
#include<math.h>
//判断101到200之间的素数

void main()
{
	int i,j;
	
	for(i=101;i<200;i++)
	{
		for(j=2;j<sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		
		if(j>=sqrt(i))
		{
			printf("%d\n",i);
		}
	}
}
