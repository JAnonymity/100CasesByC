#include<stdio.h>

//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

void main()
{
	int num;
	int a,b,c,d,e;
	scanf("%d",&num);
	a=num/10000;
	b=num/1000%10;
	c=num/100%10;
	d=num/10%10;
	e=num%10;
	
	if(e==a&&d==b)
	{
		printf("%d是回文数",num);
	}
	else
	{
		printf("%d不是回文数",num);
	}
	
	getchar();
}
