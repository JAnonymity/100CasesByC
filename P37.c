#include<stdio.h>

//��10������������

void main()
{
	int i,j,t,min,a[10];
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		min=i;//��һ��Ĭ����С 
		for(j=i+1;j<10;j++)
		{
			if(a[min]>a[j])
			{
				min=j; 				
			}
		}
		if(min!=i)//ֻҪ��Сֵ�б仯,��ô�ͽ��� 
		{
			printf("min=%d,i=%d\n",min,i); 
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}	
}
