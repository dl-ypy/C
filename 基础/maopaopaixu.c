/*
    2015��12��1��12:36:07
	Ŀ�ģ�ð������ 
*/ 
#include <stdio.h>

void sort(int * a, int len)
{
	int i, j, t;
	
	for (i=0; i<len-1; i++)//һ��Ҫ��len-1��  �����������һ�����һ��һ�������ֵ 
	{
		for (j=0; j<len-1-i; j++)//ÿ��һ�ζ������������ı� 
		{
			if (a[j] > a[j+1])// >��ʾ����<��ʾ���� 
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
***************���***************
-8 0 2 8 10 11

--------------------------------
Process exited after 0.0537 seconds with return value 0
�밴���������. . .
*/
