/*
    2015��11��18��08:48:13
	Ŀ�ģ�������ϵͳ������ 
*/ 
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int i = 5,a = -5;
	double j,m;
	j = -5.9;
	
	n = sqrt(i);
	printf("i��ƽ����Ϊ��%d\n", n);
	
	n = abs(a);
	printf("a�ľ���ֵΪ��%d\n", n);
	
	m = fabs(j);
	printf("j�ľ���ֵΪ��%f\n", m);
	
	return 0;
}
/*
***************���***************
i��ƽ����Ϊ��2
a�ľ���ֵΪ��5
j�ľ���ֵΪ��5.900000

--------------------------------
Process exited after 0.05116 seconds with return value 0
�밴���������. . .
*/
