#include<stdio.h>

//��#define������ϰ3��

#define LAG >
#define SMA <
#define EQ ==

void main()
{
	int i,j;
	printf("��������������:\n");
	scanf("%d %d",&i,&j);
	if(i LAG j)
	{
		printf("%d ���� %d",i,j);
	}
	else if(i SMA j)
	{
		printf("%d С�� %d",i,j);
	}
	else if(i EQ j)
	{
		printf("%d ���� %d",i,j);
	}
	else
	{
		printf("û��ֵ\n");
	}
	
	getchar();
}
