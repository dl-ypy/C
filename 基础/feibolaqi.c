/*
    2015��11��10��13:29:55
	Ŀ�ģ�쳲���������_��ο������� 
*/
#include <stdio.h>

int main(void)
{
	int i,n,f1,f2,f3;
	f1 = 1;
	f2 = 2;
	printf("����������Ҫ���������У�");
	scanf("%d", &n);
	
	if (n == 1)
	{
		f3 = 1;
	}
	else if (n == 2)
	{
		f3 = 2;
	}
	else
    {
    	for (i=3; i<=n; i++)
    	{
    	    f3 = f1 + f2;
    	    f1 = f2;
    	    f2 = f3;
    	    printf("%d\n", f3);
    	}
	}
	
	printf("%d\n", f3);
	
	return 0;
}
//���ۣ���Ҫ���� 
/*
***************���***************
����������Ҫ���������У�6
3
5
8
13
13

--------------------------------
Process exited after 3.408 seconds with return value 0
�밴���������. . .
*/ 
