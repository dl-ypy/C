/*
    2015年12月3日17:13:37
	目的：补码的使用 
*/
#include <stdio.h>

int main(void)
{
	int i = -3;
	int j = 0XFFFFFFCA;
	//溢出问题 
	char ch = 128;// 1000 0000 把4个字节的赋给1个字节的,只把1000 0000放进去了,前面的0都没了，所以是负数 
	
	printf("%#X\n", i);
	printf("%d\n", j);
	printf("%d\n", ch);
}
/*
***************结果***************
0XFFFFFFFD
-54
-128

--------------------------------
Process exited after 0.04354 seconds with return value 5
请按任意键继续. . .
*/
