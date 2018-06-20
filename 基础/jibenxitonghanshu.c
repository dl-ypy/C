/*
    2015年11月18日08:48:13
	目的：基本的系统函数。 
*/ 
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int i = 5,a = -5;
	double j,m;
	j = -5.9;
	
	n = sqrt(i);
	printf("i的平方根为：%d\n", n);
	
	n = abs(a);
	printf("a的绝对值为：%d\n", n);
	
	m = fabs(j);
	printf("j的绝对值为：%f\n", m);
	
	return 0;
}
/*
***************结果***************
i的平方根为：2
a的绝对值为：5
j的绝对值为：5.900000

--------------------------------
Process exited after 0.05116 seconds with return value 0
请按任意键继续. . .
*/
