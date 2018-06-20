/*
    2015年11月28日09:39:29
	目的：跨函数使用内存的用法。 
*/ 
#include <stdio.h>
#include <malloc.h>

void f(int ** q)//q是个指针变量 
{
	int i = 5;
	//*q等价于p  q和**q都不等价于p
	*q = &i;//p = &i; 
}

void g(int ** q)//     动态分配后的正确 
{
	*q = (int *)malloc(sizeof(int));
	        //等价于p = (int *)malloc(sizeof(int));
	//q = 1;错误 
	//*q = 1;等价于p = 1; 错误，因为p存放的是地址 
	**q = 1;//等价于*p = 1;		 
}

int main(void)
{
	int * p;
	
	f(&p);
	printf("%d\n", *p);//本语句语法没问题，但逻辑上有问题 ,因为静态分配的f函数运行完后分配的空间也释放了 
	
	g(&p);
	printf("%d\n", *p);
	
	return 0;
} 
/*
    跨函数使用内存使代码的功能更强大
	main()
	{
        f();
        g();
        m();
	{ 
	可以让下面的函数不断能使用上面函数的内存，进行操作
***************结果***************
5
1

--------------------------------
Process exited after 0.05586 seconds with return value 0
请按任意键继续. . .
*/
