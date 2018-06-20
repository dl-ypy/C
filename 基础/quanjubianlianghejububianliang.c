/*
    2015年11月19日10:14:44
	目的：全局变量和局部变量的使用。 
*/ 
#include <stdio.h>

int k = 100;//   全局变量，能在定义的下面使用，但不能在定义的上面使用

void g()
{
	int k = 99;  //  局部变量覆盖了全局变量 
	printf("k = %d\n", k);
} 

void f(int i)
{
	//int i;      不能再定义i
	int j = 10;
	g();
	printf("i = %d,j = %d\n", i,j);//    i,j都是局部变量，只能在本函数内部使用 
}

int main(void)
{
	int i = 0;
	
	f(i);
	
	return 0;
}
/*
***************结果***************
k = 99
i = 0,j = 10

--------------------------------
Process exited after 0.05796 seconds with return value 0
请按任意键继续. . .
*/
