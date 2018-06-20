/*
    2015年11月27日10:17:50
	目的：多级指针的运用。 
*/ 
#include <stdio.h>

void f(int * p)
{
	*p = 100;
}

void g(int ** p)
{
	f(*p);//     和int * 类型保持一致 
}
/*
         跨函数调用 
*/

int main(void)
{
	int i = 10;
	int * p = &i;
	int ** q = &p;
	int *** r = &q;
	
	//r = &p;  错误，因为r是int***类型，r只能存放int**类型的变量的地址 
	
	printf("p=%d *p=%d q=%d *q=%d **q=%d r=%d *r=%d **r=%d ***r=%d\n", p, *p, q, *q, **q, r, *r, **r, ***r);
    printf("i = %d,%d,%d\n", *p,**q,***r);
    
    printf("*p = %d\n", *p);
    
    f(p);
    printf("*p = %d\n", *p);
    
    g(&p);//     &p和形参的int ** 类型保持一致，因为p的类型为int*,所以&p的类型就为int** 
    printf("*p = %d\n", *p);
	
	return 0;
}
/*
***************结果***************
p=2424372 *p=10 q=2424360 *q=2424372 **q=10 r=2424352 *r=2424360 **r=2424372 ***r=10
i = 10,10,10
*p = 10
*p = 100
*p = 100

--------------------------------
Process exited after 0.05918 seconds with return value 0
请按任意键继续. . .
*/
