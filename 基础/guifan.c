/*

2015��11��4��08:51:36 
Ŀ�ģ��淶�����Լ����������� 

*/ 
#include <stdio.h>

int main(void)
{
	int i = 18; 
	float n = 2.356651;
	char ch = 'A';//�ַ��õ����ţ��ַ�����˫���� 
	//char ch = "A";����  ��Ϊ"A"Ϊ�ַ�����chΪ�ַ� 
	
	printf("%d\n", i); 
	printf("%ld\n", i);
	printf("�˽���%o\n", i);
	printf("ʮ������%X\n", i);
	printf("ʮ������%#X\n", i);//#X���0X12,��ʾ����ϸ 
	printf("%20.4f\n", n);//20��ʾ��20���ֽ��Ҷ���.4��ʾ����4λС��
	printf("%-20.3f\n", n);//"-"��ʾ����� 
	printf("%c\n", ch);
	printf("�ַ�ת��Ϊ����%d\n", ch);
	printf("%s,%8.3s,%-8.3s\n", "abcdef","abcdef","abcdef");
	printf("%f\n", 1/i); 
	printf("%f\n", 1/(float)(i));//ǿ������ת�� ,����д��(float)(1/i)
	printf("%f\n", 1.0/i); //���� 
	printf("%f\n", 66.6);
	printf("%f\n", 66.6f);//66.6��double���ͣ������f��F ���Ըı�Ϊfloat���� 
	
	return 0;
 } 
/*
***************���***************
18
18
�˽���22
ʮ������12
ʮ������0X12
              2.3567
2.357
A
�ַ�ת��Ϊ����65
abcdef,     abc,abc
0.000000
0.055556
0.055556
66.600000
66.599998

--------------------------------
Process exited after 0.05633 seconds with return value 0
�밴���������. . .
*/ 
