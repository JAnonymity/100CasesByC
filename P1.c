#include<stdio.h>

//1~4������ظ����ֵ���λ��

void main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
//			for(k=1;k<=4;k++)
//			{
//				if(i!=j&&j!=k&&k!=i)
//				{
//					printf("%d%d%d\n",i,j,k);
//				}
//			}
			if(i!=j)//��λ������ʮλ 
			{
				for(k=1;k<=4;k++)
				{
					if(j!=k&&k!=i)//ʮλ�����ڰ�λ,��λ�����ڸ�λ 
					{
						printf("%d%d%d\n",i,j,k);	
					}	
				}	
			}				
		}	
	}
	
	getchar();	
}
