/*
    2015��12��2��08:20:24
	Ŀ�ģ�ö�ٵ�ʹ�á� 
*/ 
#include <stdio.h>

enum WeekDay//ֻ������һ���������ͣ���û�ж�����������������͵������� enum WeekDay 
{
	MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay
};//   0       1         2          3        4        5        6
  //���д��Monday = 4, ����Ĭ��Ϊ5��6��7��8��9��10 
int main(void)
{
	enum WeekDay day = WednesDay;
	printf("%d\n", day); 
	
	return 0;
}
/*
***************���***************
2

--------------------------------
Process exited after 0.04789 seconds with return value 0
�밴���������. . . 
*/ 
