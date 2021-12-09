#include<stdio.h>

//兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。

void main()
{
	int f1=1;
	int f2=1;
	int i;
	
	for(i=1;i<=20;i++)
	{
		printf("%12d %12d",f1,f2);
		
		if(i%2==0)
		{
			printf("\n");
		}	
		f1=f1+f2;
		f2=f1+f2;
	}
}
