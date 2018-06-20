#include<stdio.h>
#include<string.h>
main()
{
    int i,days,y;
    int n=0;
    printf("ÊäÈëÄê·İ£»");
    scanf("%d",&y);
    for(i=1940;i<=y;i++)
    {
        if(y%400==0||y%100!=0&&y%4==0)
        {
           n=n+1;
        }      
    }
    days=n*366+(y-1940-n)*365;
    
    printf("%d\n",days);
    system("pause");

}
