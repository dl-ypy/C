/*
    2015��11��26��16:33:31
	Ŀ�ģ���̬һά����Ĺ��졣 
*/ 
#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int a[5];//  ������20���ֽ� ��ÿ4���ֽ�һ������
	int len,i,n,m;
    int * pArr;
	
    printf("��������Ҫ��ŵ�Ԫ�ظ�����");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len); //  �൱��дint pArr[len];
	
	for (i=0; i<len; i++)
		scanf("%d", &pArr[i]);//   �Զ�̬һά���鸳ֵ
		
		printf("��̬һά����������ǣ�\n");
		
	for (i=0; i<len; i++)
		printf("%d ", pArr[i]);//   ��� 
		
	printf("���Ƿ�Ҫ��������ռ䣿��1�����ǣ�");
	scanf("%d", &n); 
	
	if (n == 1)
     {
     	printf("��������Ҫ���ռ����䵽���");
     	scanf("%d", &m);
     	
     	realloc(pArr, m);
     	
     	printf("������ɣ�\n");
	 }
		
	free(pArr);
	
	return 0;
}
/*
***************���***************
��������Ҫ��ŵ�Ԫ�ظ�����5
1
2
3
4
5
��̬һά����������ǣ�
1 2 3 4 5 ���Ƿ�Ҫ��������ռ䣿��1�����ǣ�1
��������Ҫ���ռ����䵽���200
������ɣ�

--------------------------------
Process exited after 36.55 seconds with return value 0
�밴���������. . .
*/ 
