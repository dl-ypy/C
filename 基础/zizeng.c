/*
     2015��11��9��16:19:13
	 Ŀ�ģ�ǰ�����ͺ����������� 
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,n;
	i = j = 1;
	k = i++;//�ȸ�ֵ��++ 
	n = ++j;//��++����ֵ 
	
	printf("i = %d,j = %d,k = %d,n = %d\n", i,j,k,n);
	
	return 0;
}
//ͨ������i++��++i��һ��ʹ�� 
/*
***************���***************
i = 2,j = 2,k = 1,n = 2

--------------------------------
Process exited after 0.05312 seconds with return value 0
�밴���������. . .
*/
