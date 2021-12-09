#include<stdio.h>

//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

void main()
{
	char i,j;
    printf("请输入第一个字母:\n");
    scanf("%c",&i);
    getchar();//scanf("%c",&j);的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个getchar() 吃掉换行符
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
            printf("请输入下一个字母\n");
            scanf("%c",&j);
            if (j=='u') {printf("Tuesday\n");break;}
            if (j=='h') {printf("Thursday\n");break;}
        case 's':
            printf("请输入下一个字母\n");
            scanf("%c",&j);
            if (j=='a') {printf("Saturday\n");break;}
            if (j=='u') {printf("Sunday\n"); break;}
        default :
            printf("error\n"); break;
    }
}
