#include<stdio.h>

//一个5位数判断它是不是回文数
//即12321是回文数，个位与万位相同，十位与千位相同

void main()
{
	int x,time=0,n;
	int ge,shi,bai,qian,wan;
	scanf("%d",&x);
	
	n=x;
	
	while(n)
	{
		time++;
		n/=10;
	}
	
	if(time>5)
	{		
		printf("You can not input a number>5\n");
		scanf("%d",&x);
	}

	ge=x%10;
	shi=x/10%10;
	bai=x/100%10;
	qian=x/1000%10;
	wan=x/10000%10;
	if(ge==wan&&shi==qian)
	{
		printf("%d is a palindromic number",x);
	}
	else
	{
		printf("%d is not a palindromic number",x);
	}
}
