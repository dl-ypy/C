/*
    2015��11��11��09:19:14
	Ŀ�ģ�break���÷��� 
*/
#include <stdio.h>

int main(void)
{
	int i,j;
	/*
	    if (1)
	    {
	    }
	    break;     ���󣬲���ֱ������if��� 
	*/
	for (i=1; i<=3; i++)
	{
		if (3>2)
            break;
        printf("123\n");
	 }                  //��Ȼbreakλ��if����У�������ֹ����for��� 
	 for (i=0; i<3; i++)
	 {
	 	for (j=0; j<3; j++)
	 	{
	 		if (1)
	 		    break;
		 }
		 printf("123\n"); //�ڶ��Ƕ��forѭ���У�break��ֹ�������������forѭ�� /switch
	 }
	
	return 0;
}
/*
***************���***************
123
123
123

--------------------------------
Process exited after 0.05755 seconds with return value 0
�밴���������. . . 
*/ 
