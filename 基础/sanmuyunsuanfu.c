/*
    2015年11月9日16:28:40
	目的：三目运算符的使用 
*/
#include <stdio.h>
int main(void)
{
	int i;
	
	i = (3>2 ? 5 : 1);
	printf("i = %d\n", i);//判断是否3>2 是  执行5，否   执行1 
	
	return 0;
}
/*
***************结果***************
i = 5

--------------------------------
Process exited after 0.05105 seconds with return value 0
请按任意键继续. . .
*/
