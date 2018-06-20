#include <stdio.h>
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int leapyearmonthdays[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int year=2011;

int month=4;

int day=22;



int isweekday(int y,int m,int d)

{

 int weekday;

 if(m<3) 

    { 

  m+=12; 

        y--;

    }

 return weekday=(2+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;

}



isleapyear(int y)

{

 return (y%400==0 || y%100!=0 && y%4==0);

}



void print_month(int y,int m)

{

 int i=0;

 int startday=isweekday(y,m,1);

 printf("\n%4d/%02d\n",y,m);

 printf("*****************************\n");
 printf(" SUN MON TUE WED THU FRI STA \n");

 for(i=0;i<startday;i++)

 {

  printf("    ");

 }

 if(isleapyear(y))

 {

  for(i=1;i<=leapyearmonthdays[m-1];i++)

  {

   printf("%3d ",i); 

   if((startday+i)%7==0)

    printf("\n");

  }



 }

 else

 {

  for(i=1;i<=monthdays[m-1];i++)

  {

   printf("%3d ",i); 

   if((startday+i)%7==0)

    printf("\n");

  }

 }

 printf("\n*****************************\n");

}



void print_year(int y)

{

 int i;

 for(i=1;i<=12;i++)

 {

  print_month(y,i);

 }

}



int counterdays(int y,int m,int d)

{

 int temp=0;

 int days=0;

 int i;

 for(i=year+1;i<y;i++)

 {

  if(isleapyear(i))

   temp++;

 }

 

 if(y-year>=1)

 {

  if(isleapyear(year) && month<=2)

   temp++;

  

  if(isleapyear(y) && m>2 ||(m==2 && d==29))

   temp++;



  for(i=month+1;i<=12;i++)

  {

   days+=monthdays[i-1];

  }

  

  for(i=1;i<m;i++)

  {

   days+=monthdays[i-1];

  }

  days+=(y-year-1)*365;

 }

 if(!(year==y && month==m))

 {

  days+=monthdays[month-1]-day+d;

 }

 else

 {

  days+=d-day;

 }

 days+=temp;



 printf("\n�����%d/%d/%d����%d��\n",y,m,d,days);

 

 return days;

}





void setday(int y,int m,int d)

{

 year=y;

 month=m;

 day=d;

}



void main()

{

 int temp;

 int y,m,d;

 char ch;

 do{

 printf("������Ҫ��ѯ�ķ�ʽ(1.��ѯ����2.��ѯ����3.��������4.���õ�ǰ����(%d/%d/%d)):",year,month,day);

 scanf("%d",&temp);

 switch(temp)

 {

 case 1:

  printf("���������(ep:2011):");

  scanf("%d",&y);

  print_year(y);

  break;

 case 2:

  printf("����������(ep:2011/4):");

  scanf("%d/%d",&y,&m);

  print_month(y,m);

  break;

 case 3:

  printf("����������(ep:2011/4/22):");

  scanf("%d/%d/%d",&y,&m,&d);

  counterdays(y,m,d);

  break;

 case 4:

  printf("�����뵱������(ep:2011/4/22):");

  scanf("%d/%d/%d",&y,&m,&d);

  setday(y,m,d);

  break;

 default:

  break;

 }

 printf("\n\n�Ƿ������(Y������,������˳�)");

 getchar();

 scanf("%c",&ch);

 }while(ch=='y' || ch=='Y');

}
