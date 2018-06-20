/*
   2015年11月5日10:19:55
   目的：scanf需要注意的 
*/
#include <stdio.h>

int main(void)
{
	int i,j,k,n;
	int sum = k + n;
	
	printf("%d\n", sum);//此时输出一个系统自定义值，因为上一行赋值sum时，k和m的值还没有输入，应将sum=m+n放在scanf语句后 
	scanf("%d", &i+1);//此处的i+1不能加括号 
	printf("输入3个数字：\n");
	scanf("%d%d%d", &i,&j,&k);//输入时要用空格隔开 
	printf("i = %d,j = %d,k = %d\n", i,j,k);
	scanf("%d,%d,%d", &i,&j,&k);//此时输入要用英文逗号隔开 
	printf("i = %d,j = %d,k = %d\n", i,j,k);
	printf("输入n\n");
	scanf("%d", &n);
	printf("n = %d\n", n);//当输入123m时  任然能读取到123 
	scanf("%d", &n);
	printf("n = %d\n", &n);//此时输出错误，因为有上次输入123m时残留的垃圾数据m,此时读取到的是m 
	
	return 0;
}
/*
***************结果***************
-1987211520
45
输入3个数字：
5 9 88
i = 5,j = 9,k = 88
1,88,6
i = 1,j = 88,k = 6
输入n
9
n = 9
123m
n = 2424380

--------------------------------
Process exited after 69.62 seconds with return value 0
请按任意键继续. . .
*/
