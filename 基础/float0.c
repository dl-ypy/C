/*
     2015��11��9��10:30:41
	 Ŀ�ģ�����ʱ������һ���� 
*/ 
#include <stdio.h>
#include <math.h>

int main(void)
{
	float x,y;
	x = 99.9; 
	
	printf("%f\n", x);//     ������Ϊ99.900002 
	printf("����x.\n");
	scanf("%f", &x);
	if (fabs(x-0.000001) <= 0.000001)//float��double�Ͳ��ܱ�֤׼ȷ�Ĵ洢һ��С��
	    printf("x��0.\n");           //fabsΪ������ȡ����ֵ������Ϊabs 
	else
	    printf("x����0.\n"); 
}
/*
***************���***************
99.900002
����x.
0
x��0.

--------------------------------
Process exited after 14.12 seconds with return value 0
�밴���������. . .
*/
