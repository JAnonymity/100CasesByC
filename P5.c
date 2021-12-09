#include<stdio.h>

//三个数，从小到大输出

void main()
{
	 int x,y,z,t;
	 
	 scanf("%d%d%d",&x,&y,&z);
	 
	 if(x>y)
	 {
	 	t=x;
	 	x=y;
	 	y=t;
	 }
	 
	 if(x>z)
	 {
	 	t=z;
	 	z=x;
	 	x=t;
	 }
	 
	 if(y>z)
	 {
	 	t=y;
	 	y=z;
	 	z=t;
	 }
	 
	 printf("%d-%d-%d\n",x,y,z);
}
