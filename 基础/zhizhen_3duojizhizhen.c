/*
    2015��11��27��10:17:50
	Ŀ�ģ��༶ָ������á� 
*/ 
#include <stdio.h>

void f(int * p)
{
	*p = 100;
}

void g(int ** p)
{
	f(*p);//     ��int * ���ͱ���һ�� 
}
/*
         �纯������ 
*/

int main(void)
{
	int i = 10;
	int * p = &i;
	int ** q = &p;
	int *** r = &q;
	
	//r = &p;  ������Ϊr��int***���ͣ�rֻ�ܴ��int**���͵ı����ĵ�ַ 
	
	printf("p=%d *p=%d q=%d *q=%d **q=%d r=%d *r=%d **r=%d ***r=%d\n", p, *p, q, *q, **q, r, *r, **r, ***r);
    printf("i = %d,%d,%d\n", *p,**q,***r);
    
    printf("*p = %d\n", *p);
    
    f(p);
    printf("*p = %d\n", *p);
    
    g(&p);//     &p���βε�int ** ���ͱ���һ�£���Ϊp������Ϊint*,����&p�����;�Ϊint** 
    printf("*p = %d\n", *p);
	
	return 0;
}
/*
***************���***************
p=2424372 *p=10 q=2424360 *q=2424372 **q=10 r=2424352 *r=2424360 **r=2424372 ***r=10
i = 10,10,10
*p = 10
*p = 100
*p = 100

--------------------------------
Process exited after 0.05918 seconds with return value 0
�밴���������. . .
*/
