/*
    2015年11月10日13:02:41
	目的：while循环的使用。 
*/ 
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int val,m;
	
	printf("请输入要判断的数：\n");
	scanf("%d", &val);
	
	m = val;
	
	while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	
	if (sum == val)
	    printf("该数为回文数。\n");
    else
        printf("该数不是回文数。\n");
	
	return 0;
}
/*
***************结果***************
请输入要判断的数：
123321
该数为回文数。

--------------------------------
Process exited after 6.612 seconds with return value 0
请按任意键继续. . .
*/
