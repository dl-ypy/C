/*
     2015年11月12日10:10:57 
	 目的：数组的用法。 
*/ 
#include <stdio.h>

int main(void)
{
	/*int a[5];
	a[5] = {1,2,3,4,5}*/  //定义错误，此时的a[5]中5表示下标，没有a[5]这个元素
	int a[5] = {1,2,3,4,5};
	int b[5];
	int i,j,t;
	int len = 5;
	//int m[len] = {1,2,3,4,5};   错误，数组长度不能为变量 
	
	//b = a     赋值错误，因为b和a表示的是数组第一个元素的地址
	for (i=0; i<5; i++)
	{
		b[i] = a[i];
		printf("b[%d] = %d ", i,b[i]);
    }                    //正确赋值方法
	 
    printf("\n");
    
    i = 0;
    j = 4;
    
    while (i < j)    //将一个数组全部倒过来 
    {
    	t = a[i];
    	a[i] = a[j];
    	a[j] = t;
    	i++;
    	j--;
	}
	for (i=0; i<5; i++)
	{
		printf("a[%d] = %d  ", i,a[i]);
	}
	printf("\n");
	//                   二维数组
	int c[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	/*
	int a[3][4] = {
	    {1,  2,  3,  4},
	    {5,  6,  7,  8},
	    {9,  10, 11,12}       另一种初始化的方法 
    }
	*/ 
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%-5d", c[i][j]);
		}
	    printf("\n");
	}
	//              内存是线性一维的，因此n维数组可当作每个元素是n-1维数组的一维数组 
	
	return 0;
}
/*
***************结果***************
b[0] = 1 b[1] = 2 b[2] = 3 b[3] = 4 b[4] = 5
a[0] = 5  a[1] = 4  a[2] = 3  a[3] = 2  a[4] = 1
1    2    3    4
5    6    7    8
9    10   11   12

--------------------------------
Process exited after 0.05343 seconds with return value 0
请按任意键继续. . .
*/
