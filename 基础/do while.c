/*
    2015��11��11��08:12:17
	Ŀ�ģ�do......while���÷� 
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b,c;
	double x1,x2;
	double delta;
	char ch;
	
	do
	{
		printf("������һԪ���η����������ϵ����\n");
		
		printf("a = ");
		scanf("%lf", &a);//��������Ϊdouble  ������%lf
		
		printf("b = ");
		scanf("%lf", &b);
		
		printf("c = ");
		scanf("%lf", &c);
		
		delta = b*b - 4*a*c;
		
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("�÷����������⣬x1 = %lf,x2 = %lf\n", x1,x2);
	    } 
	    else if (0 == delta)
	    {
	    	x1 = x2 = (-b) / (2*a);
	    	printf("�÷�������һ�⣬x1 = x2 = %lf\n", x1);
		}
		else
		{
			printf("��ʵ���⣡\n");
		}
		printf("������������������(y��Y),���������������ַ���\n"); 
		scanf(" %c", &ch);//%cǰ�����ӿո� 
	}while ('y' == ch || 'Y' == ch);
	
	return 0;
}
//��Ҫ�����˻����� 
/*
***************���***************
������һԪ���η����������ϵ����
a = 3
b = 5
c = 2
�÷����������⣬x1 = -0.666667,x2 = -1.000000
������������������(y��Y),���������������ַ���
y
������һԪ���η����������ϵ����
a = 1
b = 1
c = 1
��ʵ���⣡
������������������(y��Y),���������������ַ���
o

--------------------------------
Process exited after 48.11 seconds with return value 0
�밴���������. . .
*/ 
