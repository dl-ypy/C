/*
  	时间：2016年4月22日10:48:41
	目的：输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。 
*/
#include <stdio.h>

int main(void)
{
	char first, second;
	
	while (first != 'Y')
	{	
		printf("请输入第一个字母(大写)：\n");
		scanf("%s", &first);    //必须是%s 
		switch(first)
		{
			case 'M': printf("星期一\n");break;
			case 'T': printf("请输入第二个字母（小写）：");
				 	  scanf("%s", &second);
				 	  if (second == 'u')
				 	  {
				 	  	  printf("星期二\n");
			          }
			          else if(second == 'h')
			          {
			          	  printf("星期四\n");
					  }
					  else
					  {
					  	  printf("输入有误！\n");
					  }
					  break; 
	        case 'W': printf("星期三\n");break;
	        case 'F': printf("星期五\n");break;
	        case 'S': printf("请输入第二个字母（小写）：");
				 	  scanf("%s", &second);
				 	  if (second == 'a')
				 	  {
				 	  	  printf("星期六\n");
			          }
			          else if(second == 'u')
			          {
			          	  printf("星期日\n");
					  }
					  else
					  {
					  	  printf("输入有误！\n");
					  }
					  break;
	        case 'Y': first = 'Y';break; 
	        default: printf("输入有误！\n");break;
		}
	}
	
	return 0;
} 
/*
***************结果***************
请输入第一个字母(大写)：
M
星期一
请输入第一个字母(大写)：
T
请输入第二个字母（小写）：u
星期二
请输入第一个字母(大写)：
T
请输入第二个字母（小写）：h
星期四
请输入第一个字母(大写)：
W
星期三
请输入第一个字母(大写)：
F
星期五
请输入第一个字母(大写)：
S
请输入第二个字母（小写）：a
星期六
请输入第一个字母(大写)：
S
请输入第二个字母（小写）：u
星期日
请输入第一个字母(大写)：
a
输入有误！
请输入第一个字母(大写)：
Y 
*/
