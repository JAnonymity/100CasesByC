#include<stdio.h>
#define MAXNUMBER 1000
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������

//
//int main()
//{
//    int sum, x, i;
//    for(x = 1; x <= MAXNUMBER; x++){
//        sum = 0;
//        for(i = 1; i <= x/2; i++)
//            if(x%i == 0)
//                sum += i;
//        if(sum == x)
//            printf("%d\n", x);
//    }
//    return 0;
//}

void main()
{
	int i,j;
	int sum;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);						
		}
	}
}
