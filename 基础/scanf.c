/*
   2015��11��5��10:19:55
   Ŀ�ģ�scanf��Ҫע��� 
*/
#include <stdio.h>

int main(void)
{
	int i,j,k,n;
	int sum = k + n;
	
	printf("%d\n", sum);//��ʱ���һ��ϵͳ�Զ���ֵ����Ϊ��һ�и�ֵsumʱ��k��m��ֵ��û�����룬Ӧ��sum=m+n����scanf���� 
	scanf("%d", &i+1);//�˴���i+1���ܼ����� 
	printf("����3�����֣�\n");
	scanf("%d%d%d", &i,&j,&k);//����ʱҪ�ÿո���� 
	printf("i = %d,j = %d,k = %d\n", i,j,k);
	scanf("%d,%d,%d", &i,&j,&k);//��ʱ����Ҫ��Ӣ�Ķ��Ÿ��� 
	printf("i = %d,j = %d,k = %d\n", i,j,k);
	printf("����n\n");
	scanf("%d", &n);
	printf("n = %d\n", n);//������123mʱ  ��Ȼ�ܶ�ȡ��123 
	scanf("%d", &n);
	printf("n = %d\n", &n);//��ʱ���������Ϊ���ϴ�����123mʱ��������������m,��ʱ��ȡ������m 
	
	return 0;
}
/*
***************���***************
-1987211520
45
����3�����֣�
5 9 88
i = 5,j = 9,k = 88
1,88,6
i = 1,j = 88,k = 6
����n
9
n = 9
123m
n = 2424380

--------------------------------
Process exited after 69.62 seconds with return value 0
�밴���������. . .
*/
