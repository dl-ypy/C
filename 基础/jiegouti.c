/*
    2015��11��29��09:43:27
	Ŀ�ģ��ṹ���ʹ�á� 
*/ 
#include <stdio.h>

//��һ�ֶ��巽ʽ
struct Student//    �õ�һ�� 
{
	int age;
	float score;
	char sex;
};

//�ڶ��ֶ��巽ʽ
/*struct Student2
{
	int age;
	float score;
	char sex;
} st2;

//�����ֶ��巽ʽ
struct
{
	int age;
	float score;
	char sex;
} st3;*/

int main(void)
{
	struct Student st = {80, 66.6, 'F'};//  ��ʼ��  �����ͬʱ��ֵ
	struct Student * pst = &st;
	struct Student st2;//   �ȳ�ʼ�����󵥸���ֵ 
	st2.age = 10;//  ��һ��ȡ��Ա��ʽ 
	st2.score = 100;
	st2.sex = 'F';
	
	pst->age = 99;//  �ڶ���ȡ��Ա��ʽ 
	
	printf("%d %f %c\n", st.age, st.score, st.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
	printf("%d\n", pst->age);
	
	
	return 0;
}
/*
***************���***************
99 66.599998 F
10 100.000000 F
99

--------------------------------
Process exited after 0.05365 seconds with return value 0
�밴���������. . .
*/
