/*
    2015年11月29日09:43:27
	目的：结构体的使用。 
*/ 
#include <stdio.h>

//第一种定义方式
struct Student//    用第一种 
{
	int age;
	float score;
	char sex;
};

//第二种定义方式
/*struct Student2
{
	int age;
	float score;
	char sex;
} st2;

//第三种定义方式
struct
{
	int age;
	float score;
	char sex;
} st3;*/

int main(void)
{
	struct Student st = {80, 66.6, 'F'};//  初始化  定义的同时赋值
	struct Student * pst = &st;
	struct Student st2;//   先初始化，后单个赋值 
	st2.age = 10;//  第一种取成员方式 
	st2.score = 100;
	st2.sex = 'F';
	
	pst->age = 99;//  第二种取成员方式 
	
	printf("%d %f %c\n", st.age, st.score, st.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
	printf("%d\n", pst->age);
	
	
	return 0;
}
/*
***************结果***************
99 66.599998 F
10 100.000000 F
99

--------------------------------
Process exited after 0.05365 seconds with return value 0
请按任意键继续. . .
*/
