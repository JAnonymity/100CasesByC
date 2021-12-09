#include<stdio.h>

//两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
//a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

void main()
{
	char a,b,c;
	
	for(a='x';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		{
			if(a!=b)//一个球队不能互相比 
			{
				for(c='x';c<='z';c++)
				{
					if(c!=a&&c!=b)					
					{
						if(a!='x'&&c!='x'&&c!='z')
						{
							printf("order:%c-%c-%c",a,b,c);
						}
					}
				}
			}
		}
	}
}
