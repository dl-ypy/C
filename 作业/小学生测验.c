#include<stdio.h>
void main()
{
     int a,b,c,i,n,d,m,e,s;
	 int s1=0;
	 int s2=0;
	 int s3=0;
	 int j=0,k=0;
     char str[10];
     char fu[2]={'+','-'};
     while(1)
     {
        a=rand()%51;
        b=rand()%51;
        c=rand()%2;
        if(c==0)
			n=a+b;
		else
			n=a-b;
		if(n>=0&&n<=50)
		{
           printf("%d %c %d=?\n",a,fu[c],b);
		   printf("��������ȷ�𰸣�\n");
		   scanf("%d",&m);
		   if(m==n)
		   {
			   j=j+1;s1=s1+10;
			   printf("��ȷ������\n");
		   }
		   else
		   {
			   while(1)
			   {
				   printf("������Ĵ��������������룺\n");
				   scanf("%d",&e);
				   k=k+1;
				   if(e==n)
				   {
					   j=j+1;
                       printf("��ȷ������\n");
					   if(k==1)
					       s2=s2+7;
					   if(k==2)
						   s3=s3+5;
					   k=0;
					   break;
				   }
				   else
                   {
					   if(k==2)
					   {
						   printf("������Ĵ���������ȷ��Ϊ%d\n",n);
						   j=j+1;k=0;break;
					   }
				   }
			   }
		   }
		   if(j==10)break;
		}
      }
	 s=s1+s2+s3;
	 if(s>90)
	    printf("SMART\n");
	 if(s>80&&s<=90)
		printf("GOOD\n");
	 if(s>70&&s<=80)
		 printf("OK\n");
	 if(s>=60&&s<=70)
		 printf("PASS\n");
     if(s<60)
		 printf("TRY AGAIN\n");
     getchar();
 }
