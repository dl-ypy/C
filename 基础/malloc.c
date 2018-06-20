/*
    2015年11月25日16:51:49
	目的：malloc函数的简单使用 
*/
#include <stdio.h>
#include <malloc.h>

void f(int * q)
{
	//*p = 200;
	//q = 200;
	//**q = 200;     都错误 
	*q = 200;
	
	//free(q);  错误，因为p = q, *p = *q,p和q指向同一个空间，也就是*p和*q的空间，free(q),释放了p和q指向的空间，所以下面就不能用*p,但能用p,因为p本身的空间并没有释放。 
}

int main(void)
{
	int * p = (int *)malloc(4);
	    /*
	       1.malloc函数只有一个形参，并且是整型 
	       2.4表示请求系统为本程序分配4个字节，  前面是int * 所以是一个变量 
		   3.malloc函数只能返回第一个字节的地址 
		   4.前面分配了8（12）个字节，p变量占4（8）个字节，p所指向的内存占4个字节
		   5.p本身的内存是静态分配，p指向的内存是动态分配的 
		*/
	printf("p的内存为%d个字节，p指向的内存的字节为%d个字节，一共%d个字节。\n", sizeof(p), sizeof(*p), sizeof(p)+sizeof(*p));
	
	*p = 10;
	
	printf("%d\n", *p);
	
	f(p);
	
	printf("%d\n", *p); 
		
	free(p);//  释放内存  不是释放p本身的空间，而是释放p指向的空间	
	
	return 0;
}
/*
***************结果***************
p的内存为8个字节，p指向的内存的字节为4个字节，一共12个字节。
10
200

--------------------------------
Process exited after 0.06559 seconds with return value 0
请按任意键继续. . .
*/
