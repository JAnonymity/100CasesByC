#include<stdio.h>

//���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��

void main()
{
	char i,j;
    printf("�������һ����ĸ:\n");
    scanf("%c",&i);
    getchar();//scanf("%c",&j);�����⣬�ڶ����Ƕ����һ�����з���������������ַ��������Ҫ��һ��getchar() �Ե����з�
    switch(i)
    {
        case 'm':
            printf("Monday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 't':
            printf("��������һ����ĸ\n");
            scanf("%c",&j);
            if (j=='u') {printf("Tuesday\n");break;}
            if (j=='h') {printf("Thursday\n");break;}
        case 's':
            printf("��������һ����ĸ\n");
            scanf("%c",&j);
            if (j=='a') {printf("Saturday\n");break;}
            if (j=='u') {printf("Sunday\n"); break;}
        default :
            printf("error\n"); break;
    }
}
