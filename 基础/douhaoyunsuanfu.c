/*
    2015��11��9��16:35:31
	Ŀ�ģ������������ʹ�á� 
*/ 
#include <stdio.h>
int main(void)
{
	int i,n;
	int j = 2;
	
	n = (1, 2, 3, 4, 5, 9);//������ 
	i = (j++, ++j, j+2, j-3);
	
	printf("n = %d,i = %d,j = %d\n", n,i,j);
	
	return 0;
}
/*
***************���***************
n = 9,i = 1,j = 4

--------------------------------
Process exited after 0.05503 seconds with return value 0
�밴���������. . .
*/ 
