/*
     2015年11月9日16:19:13
	 目的：前自增和后自增的区别。 
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,n;
	i = j = 1;
	k = i++;//先赋值后++ 
	n = ++j;//先++，后赋值 
	
	printf("i = %d,j = %d,k = %d,n = %d\n", i,j,k,n);
	
	return 0;
}
//通常不把i++和++i放一块使用 
/*
***************结果***************
i = 2,j = 2,k = 1,n = 2

--------------------------------
Process exited after 0.05312 seconds with return value 0
请按任意键继续. . .
*/
