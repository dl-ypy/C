#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 int num=0,add=0; /* ���������÷� */
 int score[3]={10,7,5};
 char str[20],str1[10][20];

 while(1)
 {
  int a=0,b=0,d=0,c=0,k=0,i=0,j=-1,result;
  char sf[2]={'+','-'};
  /* ���� */
  while(1)
  {
   a=rand()%51;/*stdio.h�е����������*/ 
   b=rand()%51;/*ȷ��a,b��0��50*/ 
   d=rand()%2;/*ȷ��dΪ0��1*/
   if(d==0)c=a+b;
   else c=a-b;
   if(c>=0 && c<=50)
   {
    
    sprintf(str,"%d %c %d = \n",a,sf[d],b);/*��ͷ�ļ�stdio.h�еĺ������Ѹ�ʽ��������д��ĳ���ַ�����������*/
    strcpy(str1[num],str);/*��ͷ�ļ�string.h�еĺ������Ѵ�src��ַ��ʼ�Һ���NULL���������ַ������Ƶ���dest��ʼ�ĵ�ַ�ռ䡣*/
    if(num==0) break;
    j=-1;
    for(i=0; i<num; i++)
    {
        if(strcmp(str,str1[i])==0)/* �����ͬ���³��� */
    {    j=1;break;}
     }
     if(j<0)
      break;
   }
  }
  printf("%s\n",str);
  /* �ش� */
  printf("���������:\n");
  while(1)
  {
   scanf("%d",&result);
   k++;
   if(result==c)
   {
    printf("�ش���ȷ!\n");
    add+=score[k-1];
    break;
   }
   else if(k<3)
   {
    printf("����,�����»ش�:\n");
   }
   else 
   {    printf("����,��ȷ��: %d\n",c);
       break;
  }
  } 
   num++;
   if(num==10)break;
  }
  if(add>=90)printf("\nSMART\n");
  else if(add>=80)printf("\nGOOD\n");
  else if(add>=70)printf("\nOK\n");
  else if(add>=60)printf("\nPASS\n");
  else printf("\nTRY AGAIN\n");
  getch();
}
