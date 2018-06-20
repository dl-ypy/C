/*
    2015年12月4日13:27:26
	目的：按位运算符的使用 
*/ 
#include <stdio.h>

int main(void)
{
	int i = 6;
	int j = 7;
	int k;
	
	k = i & j;//把i和j的二进制代码的每一位进行逻辑与运算 
	printf("%d\n", k);
	
	k = i && j;
	printf("%d\n", k);//逻辑运算符    k的值只能是0或1 
	
	k = i | j;
	printf("%d\n", k);//把i和j的二进制代码的每一位进行逻辑或运算 
	
	k = ~i;
	printf("%d\n", k);//~i就是把i变量的所有二进制位取反
	
	k = i << 1;//左移n位相当于乘以2的n次方
    printf("%d\n", k);
    
    k = i >> 1;//左移n位相当于除以2的n次方
    printf("%d\n", k);
	
	return 0;
}
/*
***************结果***************
6
1
7
-7
12
3

--------------------------------
Process exited after 0.05589 seconds with return value 0
请按任意键继续. . . 
*/ 
