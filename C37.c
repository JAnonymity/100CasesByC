#include<stdio.h>

//��10������������

void main()
{
	int a[10];
	int i,j,t;
	printf("������ʮ����:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("����ǰ����:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
//	ð�ݷ� 
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<9-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//		}
//	}
	printf("\n");
	printf("���������:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
