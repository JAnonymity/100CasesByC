#include<stdio.h> 
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x) 

void main()
{
	int num;
	int again=1;
	printf("\40：如果输入的值小于50，程序会停止\n");
	while(again)
	{
		printf("\40:请输入一个数字==>");
		scanf("%d",&num);
		printf("\40:T平方根为:%d\n",SQ(num));
		if(num>=50)
		{
			again=TRUE;
		}
		else
		{
			again=FALSE;
		}
	}
	
	getchar();
}
