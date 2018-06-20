/*
    2015年11月26日16:33:31
	目的：动态一维数组的构造。 
*/ 
#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int a[5];//  共包含20个字节 ，每4个字节一个变量
	int len,i,n,m;
    int * pArr;
	
    printf("请输入您要存放的元素个数：");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len); //  相当于写int pArr[len];
	
	for (i=0; i<len; i++)
		scanf("%d", &pArr[i]);//   对动态一维数组赋值
		
		printf("动态一维数组的内容是：\n");
		
	for (i=0; i<len; i++)
		printf("%d ", pArr[i]);//   输出 
		
	printf("您是否要扩充数组空间？（1代表是）");
	scanf("%d", &n); 
	
	if (n == 1)
     {
     	printf("请输入您要将空间扩充到多大：");
     	scanf("%d", &m);
     	
     	realloc(pArr, m);
     	
     	printf("扩充完成！\n");
	 }
		
	free(pArr);
	
	return 0;
}
/*
***************结果***************
请输入您要存放的元素个数：5
1
2
3
4
5
动态一维数组的内容是：
1 2 3 4 5 您是否要扩充数组空间？（1代表是）1
请输入您要将空间扩充到多大：200
扩充完成！

--------------------------------
Process exited after 36.55 seconds with return value 0
请按任意键继续. . .
*/ 
