#include<stdio.h>

//ѧϰʹ��static����һ�÷���

void main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num ����Ϊ %d \n",num);
        num++;
        {
            static int num=1;
            printf("����ģ�� num ����Ϊ %d\n",num);
            num++;
        }
    }
}
