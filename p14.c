#include<stdio.h>
#include<conio.h>
//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

void main()
{
	int i,n;
	printf("请输入一个正整数:\n");
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++)
	{
		while(n!=i)
		{
			if(n%i==0)
			{
				printf("%d*",i);
				n/=i;//一个质因数完后，再来分解 
			}
			else
			{
				break;
			}
		}
	}
	printf("%d",n);	
	getch();
}
