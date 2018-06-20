/*
    2015年12月1日13:08:46
	目的：综合应用——学生管理系统 
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
	
	printf("请输入学生的个数：");
	scanf("%d", &len);
	
	pArr = (stu *)malloc(sizeof(stu)*len);
	
	for (i=0; i<len; i++)
	{
		printf("请输入第%d个学生的信息：", i+1);
		printf("age = ");
		scanf("%d", &pArr[i].age);
		printf("name = ");
		scanf("%s", pArr[i].name);// 因为name是数组，所以不需要加&
		printf("score = ");
		scanf("%f", &pArr[i].score); 
	}
	
	for (i=0; i<len-1; i++)//一共要比len-1次  如果升序，排完一次最后一个一定是最大值 
	{
		for (j=0; j<len-1-i; j++)//每比一次都是两个两个的比 
		{
			if (pArr[j].score > pArr[j+1].score)// >表示升序，<表示降序 
			{
				t = pArr[j];
				pArr[j] = pArr[j+1];
				pArr[j+1] = t;
			}
		}
	}
	
	for (i=0; i<len; i++)
	{
		printf("第%d个学生的信息：\n", i+1);
		printf("age = %d\n", pArr[i].age);
		printf("name = %s\n", pArr[i].name);
		printf("score = %f\n", pArr[i].score);
	}
	
	return 0;
}
/*
***************结果***************
请输入学生的个数：3
请输入第1个学生的信息：age = 22
name = 红烧肉
score = 99
请输入第2个学生的信息：age = 21
name = 何光伟
score = 89
请输入第3个学生的信息：age = 23
name = 肯定会给
score = 77
第1个学生的信息：
age = 23
name = 肯定会给
score = 77.000000
第2个学生的信息：
age = 21
name = 何光伟
score = 89.000000
第3个学生的信息：
age = 22
name = 红烧肉
score = 99.000000

--------------------------------
Process exited after 58.16 seconds with return value 0
请按任意键继续. . .
*/
