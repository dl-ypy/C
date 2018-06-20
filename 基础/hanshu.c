/*
    2015年11月15日14:15:03
	目的：函数的用法。 
*/ 
#include <stdio.h>  //    对库函数的声明 

int f(void)
{
	return 10;
}

void g(void)
{
	//return 10;   错误，因为前面是void   无返回值 
}

int k(void)
{
	return 10.5;
} 

int a(void)
{
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("祸害国家改革\n");
		return;                  //  return是用来终止函数的 
	}
	printf("符合哦个ing片么怕感冒\n");
 } 
 
 int sushu(int val)//                 判断一个数是否是素数 
 {
 	int i;
 	for (i=2; i<val; i++)
 	{
 		if (val%i == 0)    //素数    只能被1和自己整除 
 		break;
    }
    
    if (i == val)
        return 1;
    else
        return 0;
 } 
 
 int b(void);//     函数的声明 ，必须有分号 

int main(void)
{
	int i = 100; 
	double x = 6.6;
	int val;
	
	i = f();
	
	printf("%d\n", i);
	
	//i = g();     错误 ，因为函数无返回值 
	x = k();
	
	printf("x = %lf\n", x);//输出为10.00000 因为k函数的返回类型为int型 
	
	a();
	
	printf("输入您要判断的数：\n");
	scanf("%d", &val);
	
	if (sushu(val))
	    printf("%d是素数。\n", val);
    else
        printf("%d不是素数。\n", val);
        
	b();    
	
	return 0;
}

int b(void)
{
	printf("函数的声明"); 
} 
//                函数有利于程序的模块化，是c语言的基本单位 
//        设计的函数功能要单一，提高利用率 
/*
***************结果***************
10
x = 10.000000
祸害国家改革
输入您要判断的数：
7
7是素数。
函数的声明
--------------------------------
Process exited after 12.94 seconds with return value 0
请按任意键继续. . .
*/
