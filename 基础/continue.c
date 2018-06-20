/*
   2015年11月11日09:54:45
   目的：continue的用法 
*/ 
#include <stdio.h>
 int main(void)
 {
 	int i,j;
 	char ch;
 	
 	printf("i = ");
 	scanf("%d", &i);
 	
 	while((ch = getchar()) != '\n')//防止用户输入错误  例如：当输入12 onuo mp时，系统会跳过非法字符，而执行后面的语句，等待用户输入j 
 	    continue;
 	    
    printf("j = ");
    scanf("%d", &j);
    
    printf("i = %d,j = %d\n", i,j);
 }
 /*
 ***************结果***************
i = 12 onuo mp
j = 6
i = 12,j = 6

--------------------------------
Process exited after 22.16 seconds with return value 13
请按任意键继续. . .
 */ 
