/*
    2015��11��6��09:17:15
	Ŀ�ģ�if���÷� 
*/
#include <stdio.h>

int main(void)
{
	int a,b,c,t;
	
	printf("������3������\n");
	
	scanf("%d%d%d", &a,&b,&c);
	
	if(a > b)
	{
		t = a;//����������ʱ�� 
		a = b;
		b = t;
	}
	
	if(a > c)
	{
		t = a;
        a = c;
        c = t;
	}
	
	if(b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	
	printf("��С��������Ϊ��%d,%d,%d\n", a,b,c);
	
	if(1 < 2);//�ӷֺţ���Ϊ����䣬��������
	
	/*if(1 < 2);��ʱ��Ϊ�����ͻᱨ����Ϊû����else��ͷ����� 
        printf("1\n");
    else
        printf("0\n");*/
        
    if(1)
        printf("1\n");
    else if(6)
  	    printf("4\n");
  	    //����ûдelse,�������� 
	
	return 0;
}
/*
***************���***************
������3������
9
5
11
��С��������Ϊ��5,9,11
1

--------------------------------
Process exited after 8.744 seconds with return value 0
�밴���������. . .
*/
