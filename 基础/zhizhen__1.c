/*
    2015年11月19日10:31:16
	目的：基础指针的运用。 
*/
#include <stdio.h>

void huhuan(int *p, int *q)//*p就是a,*q就是b 
{
	int t;
	t = *p;//     只能这样写 
	*p = *q;
	*q = t;
}

void xiugai(int *p, int *q)//   使用指针可以很容易的修改一个以上的值 
{
	*p = 1;
    *q = 2;
}

int main(void)
{
	int * p;  //p是变量的名字，int * 表示p变量存放的是int类型变量的地址    int *为数据类型 
	char ch = 'A';
	int i = 1;
	double n = 55.36;
	int j;
	int *q;
	int a = 5;
	int b = 10;
	int * p1 = &i;
	char * p2 = &ch;
	double * p3 = &n;
	
	//*p = i;    错误   因为此时p还没有指向i
	
	p = &i;//   都表示地址   p保存了i的地址，p指向i,p不是i,i也不是p,修改p的值，但不影响i的值，反之，也成立.
           //    如果指针变量指向普通变量，那么  * 指针变量就完全等价于普通变量 
	//p = i;  p = 55;   error 
	//*q = p;     错误   因为*q是int类型，p是int * 类型，不是同一个数据类型
	//*q = *p;     错误，因为
	//p = q;//   q是垃圾值，q赋给p,p也成为垃圾值 
	q = p;//   应该将p的值赋给q 
	 
	printf("*q = %d\n", *q);
	      /*
	           q的空间属于本程序，所以本程序可读写q的内容，
			   但如果q内部是垃圾值，则本程序不能读写*q的内容
			   因为此时*q所代表的内存单元的控制权限并没有分配给本程序 
		  */ 
	printf("*p = %d\n", *p);
	j = *p;//     *p就是以p的内容为地址的变量     
	 
	 printf("i = %d,j = %d\n", i,j);
	 printf("*p = %d,p = %d\n", *p,p);//   p是i的地址 
	 
	 printf("互换前a = %d, b = %d\n", a,b);
	 
	 huhuan(&a, &b);
	 
	 printf("互换后a = %d, b = %d\n", a,b);
	 
	 xiugai(&a, &b);
	 
	 printf("修改后a = %d, b = %d\n", a,b);
	 
	 printf("%d  %d  %d\n", sizeof(int), sizeof(char), sizeof(double));
	 printf("%d  %d  %d\n", sizeof(p1), sizeof(p2), sizeof(p3));
	 /*
	     sizeof(数据类型)
	     返回值为该数据类型所占字节数
		 sizeof(变量名)
		 返回值为该变量名所占字节数 
		 总结：一个指针变量，无论它指向的变量占几个字节
		       该指针本身只占4（8）个字节
			   一个变量的地址使用该变量首字节的地址来表示 
	 */
	
	return 0;
}
//      指针是地址，指针变量是存放地址的变量 
/*
***************结果***************
*q = 1
*p = 1
i = 1,j = 1
*p = 1,p = 2424348
互换前a = 5, b = 10
互换后a = 10, b = 5
修改后a = 1, b = 2
4  1  8
8  8  8

--------------------------------
Process exited after 0.04914 seconds with return value 0
请按任意键继续. . .
*/
