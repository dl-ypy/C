/*
    2015��11��15��14:15:03
	Ŀ�ģ��������÷��� 
*/ 
#include <stdio.h>  //    �Կ⺯�������� 

int f(void)
{
	return 10;
}

void g(void)
{
	//return 10;   ������Ϊǰ����void   �޷���ֵ 
}

int k(void)
{
	return 10.5;
} 

int a(void)
{
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("�������Ҹĸ�\n");
		return;                  //  return��������ֹ������ 
	}
	printf("����Ŷ��ingƬô�¸�ð\n");
 } 
 
 int sushu(int val)//                 �ж�һ�����Ƿ������� 
 {
 	int i;
 	for (i=2; i<val; i++)
 	{
 		if (val%i == 0)    //����    ֻ�ܱ�1���Լ����� 
 		break;
    }
    
    if (i == val)
        return 1;
    else
        return 0;
 } 
 
 int b(void);//     ���������� �������зֺ� 

int main(void)
{
	int i = 100; 
	double x = 6.6;
	int val;
	
	i = f();
	
	printf("%d\n", i);
	
	//i = g();     ���� ����Ϊ�����޷���ֵ 
	x = k();
	
	printf("x = %lf\n", x);//���Ϊ10.00000 ��Ϊk�����ķ�������Ϊint�� 
	
	a();
	
	printf("������Ҫ�жϵ�����\n");
	scanf("%d", &val);
	
	if (sushu(val))
	    printf("%d��������\n", val);
    else
        printf("%d����������\n", val);
        
	b();    
	
	return 0;
}

int b(void)
{
	printf("����������"); 
} 
//                ���������ڳ����ģ�黯����c���ԵĻ�����λ 
//        ��Ƶĺ�������Ҫ��һ����������� 
/*
***************���***************
10
x = 10.000000
�������Ҹĸ�
������Ҫ�жϵ�����
7
7��������
����������
--------------------------------
Process exited after 12.94 seconds with return value 0
�밴���������. . .
*/
