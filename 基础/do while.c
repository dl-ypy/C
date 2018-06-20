/*
    2015年11月11日08:12:17
	目的：do......while的用法 
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c;
	double x1,x2;
	double delta;
	char ch;
	
	do
	{
		printf("请输入一元二次方程组的三个系数：\n");
		
		printf("a = ");
		scanf("%lf", &a);//数据类型为double  必须用%lf
		
		printf("b = ");
		scanf("%lf", &b);
		
		printf("c = ");
		scanf("%lf", &c);
		
		delta = b*b - 4*a*c;
		
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("该方程组有两解，x1 = %lf,x2 = %lf\n", x1,x2);
	    } 
	    else if (0 == delta)
	    {
	    	x1 = x2 = (-b) / (2*a);
	    	printf("该方程组有一解，x1 = x2 = %lf\n", x1);
		}
		else
		{
			printf("无实数解！\n");
		}
		printf("如果您想继续，请输入(y或Y),否则，请输入任意字符。\n"); 
		scanf(" %c", &ch);//%c前面必须加空格 
	}while ('y' == ch || 'Y' == ch);
	
	return 0;
}
//主要用于人机交互 
/*
***************结果***************
请输入一元二次方程组的三个系数：
a = 3
b = 5
c = 2
该方程组有两解，x1 = -0.666667,x2 = -1.000000
如果您想继续，请输入(y或Y),否则，请输入任意字符。
y
请输入一元二次方程组的三个系数：
a = 1
b = 1
c = 1
无实数解！
如果您想继续，请输入(y或Y),否则，请输入任意字符。
o

--------------------------------
Process exited after 48.11 seconds with return value 0
请按任意键继续. . .
*/ 
