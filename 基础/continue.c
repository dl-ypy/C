/*
   2015��11��11��09:54:45
   Ŀ�ģ�continue���÷� 
*/ 
#include <stdio.h>
 int main(void)
 {
 	int i,j;
 	char ch;
 	
 	printf("i = ");
 	scanf("%d", &i);
 	
 	while((ch = getchar()) != '\n')//��ֹ�û��������  ���磺������12 onuo mpʱ��ϵͳ�������Ƿ��ַ�����ִ�к������䣬�ȴ��û�����j 
 	    continue;
 	    
    printf("j = ");
    scanf("%d", &j);
    
    printf("i = %d,j = %d\n", i,j);
 }
 /*
 ***************���***************
i = 12 onuo mp
j = 6
i = 12,j = 6

--------------------------------
Process exited after 22.16 seconds with return value 13
�밴���������. . .
 */ 
