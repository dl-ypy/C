/*
    2015��11��10��13:02:41
	Ŀ�ģ�whileѭ����ʹ�á� 
*/ 
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int val,m;
	
	printf("������Ҫ�жϵ�����\n");
	scanf("%d", &val);
	
	m = val;
	
	while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	
	if (sum == val)
	    printf("����Ϊ��������\n");
    else
        printf("�������ǻ�������\n");
	
	return 0;
}
/*
***************���***************
������Ҫ�жϵ�����
123321
����Ϊ��������

--------------------------------
Process exited after 6.612 seconds with return value 0
�밴���������. . .
*/
