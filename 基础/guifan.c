/*

2015年11月4日08:51:36 
目的：规范代码以及各数据类型 

*/ 
#include <stdio.h>

int main(void)
{
	int i = 18; 
	float n = 2.356651;
	char ch = 'A';//字符用单引号，字符串用双引号 
	//char ch = "A";错误  因为"A"为字符串，ch为字符 
	
	printf("%d\n", i); 
	printf("%ld\n", i);
	printf("八进制%o\n", i);
	printf("十六进制%X\n", i);
	printf("十六进制%#X\n", i);//#X输出0X12,表示更详细 
	printf("%20.4f\n", n);//20表示共20个字节右对齐.4表示保留4位小数
	printf("%-20.3f\n", n);//"-"表示左对齐 
	printf("%c\n", ch);
	printf("字符转换为整型%d\n", ch);
	printf("%s,%8.3s,%-8.3s\n", "abcdef","abcdef","abcdef");
	printf("%f\n", 1/i); 
	printf("%f\n", 1/(float)(i));//强制类型转化 ,不能写成(float)(1/i)
	printf("%f\n", 1.0/i); //更简单 
	printf("%f\n", 66.6);
	printf("%f\n", 66.6f);//66.6是double类型，后面加f或F 可以改变为float类型 
	
	return 0;
 } 
/*
***************结果***************
18
18
八进制22
十六进制12
十六进制0X12
              2.3567
2.357
A
字符转换为整型65
abcdef,     abc,abc
0.000000
0.055556
0.055556
66.600000
66.599998

--------------------------------
Process exited after 0.05633 seconds with return value 0
请按任意键继续. . .
*/ 
