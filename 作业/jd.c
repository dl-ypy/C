#include<stdio.h>
void main()
{
	int a,b,c,n;
	for(a=0;a<7;a++)
		for(b=0;b<7;b++)
			for(c=0;c<7;c++)
				if(a*7*7+b*7+c==c*9*9+b*9+a)
				{
                    n=a*7*7+b*7+c;
					if(n>=100&&n<=999)
					{
						printf("%d就是所求三位数。",n);
					}
                }
                getchar();

}
