#include<stdio.h>
#include <stdlib.h>
//����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
//�ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x,z��
//�������ҳ��������ֵ�������

void main()
{
	char a,b,c;
	for(a='x';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		{
			for(c='x';c<='z';c++)
			{
				if(a!=b&&a!=c&&c!=b)
				{
					if(a!='x'&&c!='x'&&c!='z')
					{
						printf("a--%c\tb--%c\tc--%c\n",a,b,c);
					}
				}
			}			
		}
	}
}
