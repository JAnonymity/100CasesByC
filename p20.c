#include<stdio.h>

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

void main()
{
	float height=100;
	float n=height/2;
	int i;
	for(i=2;i<=10;i++)
	{
		height+=n*2;
		n/=2;
	}
	
	printf("The total of road is:%f\n",height);
	printf("The tenth of height is:%f\n",n);
	
}
