/*
    2015��12��1��13:08:46
	Ŀ�ģ��ۺ�Ӧ�á���ѧ������ϵͳ 
*/
#include <stdio.h>
#include <malloc.h>

typedef struct Student
{
	int age;
	float score;
	char name[1000];
}stu;

int main(void)
{
	int len, i, j;
	stu * pArr;
	stu t;
	
	printf("������ѧ���ĸ�����");
	scanf("%d", &len);
	
	pArr = (stu *)malloc(sizeof(stu)*len);
	
	for (i=0; i<len; i++)
	{
		printf("�������%d��ѧ������Ϣ��", i+1);
		printf("age = ");
		scanf("%d", &pArr[i].age);
		printf("name = ");
		scanf("%s", pArr[i].name);// ��Ϊname�����飬���Բ���Ҫ��&
		printf("score = ");
		scanf("%f", &pArr[i].score); 
	}
	
	for (i=0; i<len-1; i++)//һ��Ҫ��len-1��  �����������һ�����һ��һ�������ֵ 
	{
		for (j=0; j<len-1-i; j++)//ÿ��һ�ζ������������ı� 
		{
			if (pArr[j].score > pArr[j+1].score)// >��ʾ����<��ʾ���� 
			{
				t = pArr[j];
				pArr[j] = pArr[j+1];
				pArr[j+1] = t;
			}
		}
	}
	
	for (i=0; i<len; i++)
	{
		printf("��%d��ѧ������Ϣ��\n", i+1);
		printf("age = %d\n", pArr[i].age);
		printf("name = %s\n", pArr[i].name);
		printf("score = %f\n", pArr[i].score);
	}
	
	return 0;
}
/*
***************���***************
������ѧ���ĸ�����3
�������1��ѧ������Ϣ��age = 22
name = ������
score = 99
�������2��ѧ������Ϣ��age = 21
name = �ι�ΰ
score = 89
�������3��ѧ������Ϣ��age = 23
name = �϶����
score = 77
��1��ѧ������Ϣ��
age = 23
name = �϶����
score = 77.000000
��2��ѧ������Ϣ��
age = 21
name = �ι�ΰ
score = 89.000000
��3��ѧ������Ϣ��
age = 22
name = ������
score = 99.000000

--------------------------------
Process exited after 58.16 seconds with return value 0
�밴���������. . .
*/
