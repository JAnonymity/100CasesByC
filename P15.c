#include<stdio.h>

//学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示

void main()
{
	int score;
	char rank;
	
	scanf("%d",&score);
	
	if(score>=90)
	{
		rank='A';
	}
	else if(score>=60)
	{
		rank='B';
	}
	else
	{
		rank='C';
	}
	
	printf("%d rank is %c",score,rank);
}
