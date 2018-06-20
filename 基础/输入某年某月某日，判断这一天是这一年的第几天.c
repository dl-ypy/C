/*
    时间：2016年4月22日10:41:34
	目的：输入某年某月某日，判断这一天是这一年的第几天 
*/ 
#include<stdio.h>

int main(void)
{
	int year, month, day;
	int days;
	int leap;
	
	printf("请输入年，月，日：");
	scanf("%d,%d,%d", &year,&month,&day);
	
	switch(month)   //先判断输入月份以前的天数 
	{
		case 1: days = 0;break;
		case 2: days = 31;break;
		case 3: days = 59;break; 
		case 4: days = 90;break; 
		case 5: days = 120;break; 
     	case 6: days = 151;break; 
		case 7: days = 181;break; 
		case 8: days = 212;break; 
		case 9: days = 243;break;
		case 10: days = 273;break; 
		case 11: days = 304;break;
		case 12: days = 334;break;
		default: printf("输入有误！");break;
	}
	
	days = days + day;   //再加上本月的天数
	
	if ((year%400==0) || (year%4==0&&year%100!=0)) //判断是否为闰年 
	{
		leap = 1;
    } 
    else
    {
    	leap = 0;
	}
	
	if (month>2 && leap==1)// 如果是闰年并且月份大于2，就将天数加一 
	{
		days = days + 1;
	}
	
	printf("%d月%d日是%d年的第%d天。", month,day,year,days);
	
	return 0;
}
/*
***************结果***************
请输入年，月，日：2016,4,22
4月22日是2016年的第113天。 
*/
