/*
    ʱ�䣺2016��4��22��10:41:34
	Ŀ�ģ�����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��� 
*/ 
#include<stdio.h>

int main(void)
{
	int year, month, day;
	int days;
	int leap;
	
	printf("�������꣬�£��գ�");
	scanf("%d,%d,%d", &year,&month,&day);
	
	switch(month)   //���ж������·���ǰ������ 
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
		default: printf("��������");break;
	}
	
	days = days + day;   //�ټ��ϱ��µ�����
	
	if ((year%400==0) || (year%4==0&&year%100!=0)) //�ж��Ƿ�Ϊ���� 
	{
		leap = 1;
    } 
    else
    {
    	leap = 0;
	}
	
	if (month>2 && leap==1)// ��������겢���·ݴ���2���ͽ�������һ 
	{
		days = days + 1;
	}
	
	printf("%d��%d����%d��ĵ�%d�졣", month,day,year,days);
	
	return 0;
}
/*
***************���***************
�������꣬�£��գ�2016,4,22
4��22����2016��ĵ�113�졣 
*/
