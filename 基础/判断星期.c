/*
  	ʱ�䣺2016��4��22��10:48:41
	Ŀ�ģ��������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ�� 
*/
#include <stdio.h>

int main(void)
{
	char first, second;
	
	while (first != 'Y')
	{	
		printf("�������һ����ĸ(��д)��\n");
		scanf("%s", &first);    //������%s 
		switch(first)
		{
			case 'M': printf("����һ\n");break;
			case 'T': printf("������ڶ�����ĸ��Сд����");
				 	  scanf("%s", &second);
				 	  if (second == 'u')
				 	  {
				 	  	  printf("���ڶ�\n");
			          }
			          else if(second == 'h')
			          {
			          	  printf("������\n");
					  }
					  else
					  {
					  	  printf("��������\n");
					  }
					  break; 
	        case 'W': printf("������\n");break;
	        case 'F': printf("������\n");break;
	        case 'S': printf("������ڶ�����ĸ��Сд����");
				 	  scanf("%s", &second);
				 	  if (second == 'a')
				 	  {
				 	  	  printf("������\n");
			          }
			          else if(second == 'u')
			          {
			          	  printf("������\n");
					  }
					  else
					  {
					  	  printf("��������\n");
					  }
					  break;
	        case 'Y': first = 'Y';break; 
	        default: printf("��������\n");break;
		}
	}
	
	return 0;
} 
/*
***************���***************
�������һ����ĸ(��д)��
M
����һ
�������һ����ĸ(��д)��
T
������ڶ�����ĸ��Сд����u
���ڶ�
�������һ����ĸ(��д)��
T
������ڶ�����ĸ��Сд����h
������
�������һ����ĸ(��д)��
W
������
�������һ����ĸ(��д)��
F
������
�������һ����ĸ(��д)��
S
������ڶ�����ĸ��Сд����a
������
�������һ����ĸ(��д)��
S
������ڶ�����ĸ��Сд����u
������
�������һ����ĸ(��д)��
a
��������
�������һ����ĸ(��д)��
Y 
*/
