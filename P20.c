#include<stdio.h>

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

void main()
{
	float height=100,jumpheight=height/2;
	int i;
	
	for(i=2;i<=10;i++)
	{
		height+=jumpheight*2;
		jumpheight/=2;
	}
	
	printf("It is go throught about %fm,the tenth time is %fm\n",height,jumpheight);
}
