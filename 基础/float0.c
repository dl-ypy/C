/*
     2015年11月9日10:30:41
	 目的：面试时常考的一道题 
*/ 
#include <stdio.h>
#include <math.h>

int main(void)
{
	float x,y;
	x = 99.9; 
	
	printf("%f\n", x);//     输出结果为99.900002 
	printf("输入x.\n");
	scanf("%f", &x);
	if (fabs(x-0.000001) <= 0.000001)//float和double型不能保证准确的存储一个小数
	    printf("x是0.\n");           //fabs为浮点型取绝对值，整型为abs 
	else
	    printf("x不是0.\n"); 
}
/*
***************结果***************
99.900002
输入x.
0
x是0.

--------------------------------
Process exited after 14.12 seconds with return value 0
请按任意键继续. . .
*/
