#include<stdio.h>

//1~4组成无重复数字的三位数

void main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
//			for(k=1;k<=4;k++)
//			{
//				if(i!=j&&j!=k&&k!=i)
//				{
//					printf("%d%d%d\n",i,j,k);
//				}
//			}
			if(i!=j)//个位不等于十位 
			{
				for(k=1;k<=4;k++)
				{
					if(j!=k&&k!=i)//十位不等于百位,百位不等于个位 
					{
						printf("%d%d%d\n",i,j,k);	
					}	
				}	
			}				
		}	
	}
	
	getchar();	
}
