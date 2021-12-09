#include<stdio.h>

//Á·Ï°º¯Êýµ÷ÓÃ 

void getwgy()
{
	printf("I am wanggouyong!\n");
}

void gethaoyu()
{
	printf("I am immortal!\n");
}

void gethujj()
{
	printf("Don\'t denying me!\n");
}

void wo()
{
	int i;
	for(i=0;i<3;i++)
	{
		gethujj();
	}
	gethaoyu();
	getwgy();
}

void main()
{
	wo();
}
