#include<stdio.h>
#include<conio.h>
//��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

void main()
{
	int i,n;
	printf("������һ��������:\n");
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++)
	{
		while(n!=i)
		{
			if(n%i==0)
			{
				printf("%d*",i);
				n/=i;//һ����������������ֽ� 
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
