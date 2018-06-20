/*
    2015年12月2日08:20:24
	目的：枚举的使用。 
*/ 
#include <stdio.h>

enum WeekDay//只定义了一个数据类型，并没有定义变量，该数据类型的名字是 enum WeekDay 
{
	MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay
};//   0       1         2          3        4        5        6
  //如果写成Monday = 4, 后面默认为5，6，7，8，9，10 
int main(void)
{
	enum WeekDay day = WednesDay;
	printf("%d\n", day); 
	
	return 0;
}
/*
***************结果***************
2

--------------------------------
Process exited after 0.04789 seconds with return value 0
请按任意键继续. . . 
*/ 
