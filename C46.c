#include<stdio.h> 
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x) 

void main()
{
	int num;
	int again=1;
	printf("\40����������ֵС��50�������ֹͣ\n");
	while(again)
	{
		printf("\40:������һ������==>");
		scanf("%d",&num);
		printf("\40:Tƽ����Ϊ:%d\n",SQ(num));
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
