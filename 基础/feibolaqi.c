/*
    2015年11月10日13:29:55
	目的：斐波拉契序列_如何看懂程序。 
*/
#include <stdio.h>

int main(void)
{
	int i,n,f1,f2,f3;
	f1 = 1;
	f2 = 2;
	printf("请输入您需要求的项的序列：");
	scanf("%d", &n);
	
	if (n == 1)
	{
		f3 = 1;
	}
	else if (n == 2)
	{
		f3 = 2;
	}
	else
    {
    	for (i=3; i<=n; i++)
    	{
    	    f3 = f1 + f2;
    	    f1 = f2;
    	    f2 = f3;
    	    printf("%d\n", f3);
    	}
	}
	
	printf("%d\n", f3);
	
	return 0;
}
//结论：主要试数 
/*
***************结果***************
请输入您需要求的项的序列：6
3
5
8
13
13

--------------------------------
Process exited after 3.408 seconds with return value 0
请按任意键继续. . .
*/ 
