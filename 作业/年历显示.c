#include<stdio.h>
#include<math.h>
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int runday[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int isleapyear(int y)
{
	return(y%400==0||y%100!=0&&y%4==0);
}
int isdays(int y)
{
	int i,days,q;
	int n=0;
	for(i=1940;i<y;i++)
	{
		if(isleapyear(i))
		{
			n=n+1;
		}
	}
	days=366*n+(y-1940-n)*365;
	return q=(days%7+1+1)%7; //计算该年的1月1号
}
int yueli(int y,int m)
{
	int i,j,a,b;
	int n=0;
	a=isdays(y);
	if(m>1)
	{
        for(i=1;i<m;i++)
        {        
	        if(isleapyear(y))
	        {
                n=n+runday[i-1];
            }
            else
            {
                n=n+day[i-1];
            }
        }
        b=(n%7+a)%7; //计算该月的一号 
        a=b;
    }
    printf("%d  *****************************\n",m);
	printf("    SUN MON TUE WED THU FRI STA \n");
	for(j=0;j<a;j++)
    {
        printf("    ");
    }
    if(isleapyear(y))
	{
	    for(j=0;j<runday[m-1];j++)
	    {
            printf("%3d ",j+1);
            if((a+j)%7==0)
            {
                printf("\n");
                printf("    ");
            }
	    }
	}
	else
	{
	    for(j=0;j<day[m-1];j++)
	    {
            printf("%3d ",j+1);
            if((a+j)%7==0)
            {
                printf("\n");
                printf("    ");
            } 
	    }
	}
	printf("\n   *****************************\n");
}
void nianli(int y)
{
     int i;
     for(i=0;i<12;i++)
     {
          yueli(y,i+1);                
     }
}
int jisuan(int y,int m,int d,int y1,int m1,int d1)
{
	int i,j,days1,days2,days;
	int n=0;
	int k=0;
	int k2=0;
	int days3=0;
	if(isleapyear(y))
	{
        for(i=0;i<m;i++)
		    for(j=0;j<runday[i];j++)
			{
				k=k+1;
			}
    }
	else
	{
        for(i=0;i<m;i++)
		    for(j=0;j<day[i];j++)
			{
				k=k+1;
			}
	}
	if(isleapyear(y1))
	{
		for(i=0;i<m1;i++)
			for(j=0;j<runday[i];j++)
			{
				k2=k2+1;
			}
	}
    else
	{
        for(i=0;i<m1;i++)
		    for(j=0;j<day[i];j++)
			{
				k2=k2+1;
			}
	}
    days2=(k2+d1)-(k+d);
    if(y<y1)
	{
        for(i=y;i<y1;i++)
		{
			if(isleapyear(i))
		    n=n+1;
		}
		days1=366*n+(y1-y-n)*365;
		days2=(k2+d1)-(k+d);
	}
	else
	{
		for(i=y1;i<y;i++)
		{
			if(isleapyear(i))
		    n=n+1;
		}
		days1=366*n+(y-y1-n)*365;
        days2=(k+d)-(k2+d1);
	}
    days=days1+days2;
	if(days<0)
	{
		days=sqrt(days*days);
	}
	return days;
}
int gongli(int m,int d)
{
	if(m==1&&d==1||m==3&&d==8||m==5&&d==1||m==6&&d==1||m==10&&d==1)
	{
		printf("该日是公历节日。\n");
	}
	else
	{
		printf("该日不是公历节日。\n");
	}
}
void main()
{   int year,month,n,y,m,d,y1,m1,d1,a;
    while(m)
	{
		printf("========================================================================\n");
		printf("                               1.查看年历。                             \n");
		printf("                               2.查看月历。                             \n");
		printf("                               3.计算天数。                             \n");
		printf("                               4.是否是公历节日?                        \n");
        printf("                               5.退出。                                 \n");
		printf("========================================================================\n");
		printf("根据提示输入序号：");
		scanf("%d",&n);
        switch(n)
		{
		    case 1:printf("请输入1940年后的年份：");
				   scanf("%d",&year);
				   if(year<1940)
				   {
					   printf("您的输入有误\n");
				   }
				   else
				   {
					   nianli(year);
				   }
				   break;
			case 2:printf("请输入年份和月份：\n");
				   scanf("%d,%d",&year,&month);
				   if(year<1940||month<1||month>12)
				   {
					   printf("您的输入有误\n");
				   }
				   else
				   {
					   yueli(year,month);
				   }
				   break;
			case 3:printf("请设置今天的日期：(例:2015,9,18)\n");
				   scanf("%d,%d,%d",&y,&m,&d);
                   printf("请设置要查询的日期：");
				   scanf("%d,%d,%d",&y1,&m1,&d1);
				   a=jisuan(y,m,d,y1,m1,d1);
				   if(isleapyear(y)||isleapyear(y1))
				       if(y<1940||m<1||m>12||d<0||d>runday[m-1]||y1<1940||m1<1||m1>12||d1<0||d1>runday[m-1])
					   {
					       printf("您的输入有误\n");
					   }
				       else
					   {
					       printf("您要查询的日期距今天%d天\n",a);
					   }
                   else
				   {
                       if(y<1940||m<1||m>12||d<0||d>day[m-1]||y1<1940||m1<1||m1>12||d1<0||d1>day[m-1])
					   {
					       printf("您的输入有误\n");
					   }
				       else
					   {
					       printf("您要查询的日期距今天%d天\n",a);
					   }
				   }
				   break;
			case 4:printf("输入您要查询的日期：(例：10,1)\n");
				   scanf("%d,%d",&m,&d);
				   if(m<1||m>12||d<0||d>day[m-1]||y1<1940||m1<1||m1>12||d1<0||d1>day[m-1])
					   {
					       printf("您的输入有误\n");
					   }
				   else
				   {
				       gongli(m,d);
				   }
				   break;
			case 5:m=0;break;
		    default:printf("您的输入有误，请重新输入！");break;
		}
	}
	system("pause");
}
