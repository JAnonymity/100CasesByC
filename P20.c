#include<stdio.h>

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

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
