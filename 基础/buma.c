/*
    2015��12��3��17:13:37
	Ŀ�ģ������ʹ�� 
*/
#include <stdio.h>

int main(void)
{
	int i = -3;
	int j = 0XFFFFFFCA;
	//������� 
	char ch = 128;// 1000 0000 ��4���ֽڵĸ���1���ֽڵ�,ֻ��1000 0000�Ž�ȥ��,ǰ���0��û�ˣ������Ǹ��� 
	
	printf("%#X\n", i);
	printf("%d\n", j);
	printf("%d\n", ch);
}
/*
***************���***************
0XFFFFFFFD
-54
-128

--------------------------------
Process exited after 0.04354 seconds with return value 5
�밴���������. . .
*/
