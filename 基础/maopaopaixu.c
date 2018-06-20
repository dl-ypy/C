/*
    2015年12月1日12:36:07
	目的：冒泡排序 
*/ 
#include <stdio.h>

void sort(int * a, int len)
{
	int i, j, t;
	
	for (i=0; i<len-1; i++)//一共要比len-1次  如果升序，排完一次最后一个一定是最大值 
	{
		for (j=0; j<len-1-i; j++)//每比一次都是两个两个的比 
		{
			if (a[j] > a[j+1])// >表示升序，<表示降序 
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

int main(void)
{
	int a[6] = {10, 2, 8, -8, 11, 0};
	int i = 0;
	
	sort(a, 6);
	
	for (i=0; i<6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}
/*
***************结果***************
-8 0 2 8 10 11

--------------------------------
Process exited after 0.0537 seconds with return value 0
请按任意键继续. . .
*/
