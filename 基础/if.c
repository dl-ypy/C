/*
    2015年11月6日09:17:15
	目的：if的用法 
*/
#include <stdio.h>

int main(void)
{
	int a,b,c,t;
	
	printf("请输入3个数：\n");
	
	scanf("%d%d%d", &a,&b,&c);
	
	if(a > b)
	{
		t = a;//两个数交换时用 
		a = b;
		b = t;
	}
	
	if(a > c)
	{
		t = a;
        a = c;
        c = t;
	}
	
	if(b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	
	printf("由小到大排列为：%d,%d,%d\n", a,b,c);
	
	if(1 < 2);//加分号，变为空语句，但不报错
	
	/*if(1 < 2);此时变为空语句就会报错，因为没有以else开头的语句 
        printf("1\n");
    else
        printf("0\n");*/
        
    if(1)
        printf("1\n");
    else if(6)
  	    printf("4\n");
  	    //这里没写else,但不出错 
	
	return 0;
}
/*
***************结果***************
请输入3个数：
9
5
11
由小到大排列为：5,9,11
1

--------------------------------
Process exited after 8.744 seconds with return value 0
请按任意键继续. . .
*/
