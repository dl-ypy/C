/*
    2015年11月9日16:35:31
	目的：逗号运算符的使用。 
*/ 
#include <stdio.h>
int main(void)
{
	int i,n;
	int j = 2;
	
	n = (1, 2, 3, 4, 5, 9);//从左到右 
	i = (j++, ++j, j+2, j-3);
	
	printf("n = %d,i = %d,j = %d\n", n,i,j);
	
	return 0;
}
/*
***************结果***************
n = 9,i = 1,j = 4

--------------------------------
Process exited after 0.05503 seconds with return value 0
请按任意键继续. . .
*/ 
