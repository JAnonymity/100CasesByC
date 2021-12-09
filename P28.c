#include<stdio.h>

//五人问岁数

//问第五个人多少岁？他说比第4个人大2岁。

//问第4个人岁数，他说比第3个人大2岁。

//问第三个人，又说比第2人大两岁。

//问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。

int get_age_repeatedly(int n)
{
	int age;
	if(n==1)
	{
		age=10;
	}
	else
	{
		age=get_age_repeatedly(n-1)+2;
	}
	
	return age;
}

void main()
{
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("%d\n",get_age_repeatedly(i));
	}
}
