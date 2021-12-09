#include<stdio.h>

void main()
{
	int i,j;
	SetConsoleOutputCP(437);
	for(i=1;i<11;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c%c",219,219);
		}
		printf("\n");
	}
	getchar();
}
