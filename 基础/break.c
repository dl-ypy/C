/*
    2015年11月11日09:19:14
	目的：break的用法。 
*/
#include <stdio.h>

int main(void)
{
	int i,j;
	/*
	    if (1)
	    {
	    }
	    break;     错误，不能直接用于if语句 
	*/
	for (i=1; i<=3; i++)
	{
		if (3>2)
            break;
        printf("123\n");
	 }                  //虽然break位于if语句中，但是终止的是for语句 
	 for (i=0; i<3; i++)
	 {
	 	for (j=0; j<3; j++)
	 	{
	 		if (1)
	 		    break;
		 }
		 printf("123\n"); //在多层嵌套for循环中，break终止的是离它最近的for循环 /switch
	 }
	
	return 0;
}
/*
***************结果***************
123
123
123

--------------------------------
Process exited after 0.05755 seconds with return value 0
请按任意键继续. . . 
*/ 
