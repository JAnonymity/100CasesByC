#include<stdio.h>

//����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
//a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������

void main()
{
	char a,b,c;
	
	for(a='x';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		{
			if(a!=b)//һ����Ӳ��ܻ���� 
			{
				for(c='x';c<='z';c++)
				{
					if(c!=a&&c!=b)					
					{
						if(a!='x'&&c!='x'&&c!='z')
						{
							printf("order:%c-%c-%c",a,b,c);
						}
					}
				}
			}
		}
	}
}
