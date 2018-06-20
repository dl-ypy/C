/*
   2015年11月7日10:25:56
   目的：for循环的使用 
*/
#include <stdio.h>

int main(void)
{
	int i;
	float j;
	int sum = 0;
	int cnt = 0;
	
	/*
	  for (语句1; 语句2; 语句3)     循环顺序为：语句1，2，4，3此时，一次循环结束，再执行语句2，4，3，2······· 
	  {
	   	  语句4; 
	  } 
	*/
	for (i=1; i<10; i+=2)//i+=2等价于i=i+2 
	{
		sum = sum + i;
	}
	
	printf("1~10中奇数的和为：%d\n", sum);
	
	for (j=1; j<5; j++)//j为float型，float和double型不能保证准确的存储一个小数，因此for循环中不用float型做更新的变量，如j 
	{
		sum = sum + j;
    } 
    
    printf("%d\n", sum);
    
    sum = 0;
    
    for (i=1; i<101; i++)
    {
    	if (i%2==1)//判断是否为奇数 
    	{
    		sum = sum + i;
    		cnt++;
		}
	}
	
	printf("101内奇数的和为%d.\n", sum);
	printf("101内的奇数有%d个。\n", cnt);
	return 0;
 } 
 /*
***************结果***************
1~10中奇数的和为：25
35
101内奇数的和为2500.
101内的奇数有50个。

--------------------------------
Process exited after 0.05197 seconds with return value 0
请按任意键继续. . .
 */
