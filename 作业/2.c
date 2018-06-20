#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 int num=0,add=0; /* 答题数，得分 */
 int score[3]={10,7,5};
 char str[20],str1[10][20];

 while(1)
 {
  int a=0,b=0,d=0,c=0,k=0,i=0,j=-1,result;
  char sf[2]={'+','-'};
  /* 出题 */
  while(1)
  {
   a=rand()%51;/*stdio.h中的随机函数。*/ 
   b=rand()%51;/*确保a,b在0～50*/ 
   d=rand()%2;/*确保d为0或1*/
   if(d==0)c=a+b;
   else c=a-b;
   if(c>=0 && c<=50)
   {
    
    sprintf(str,"%d %c %d = \n",a,sf[d],b);/*在头文件stdio.h中的函数，把格式化的数据写入某个字符串缓冲区。*/
    strcpy(str1[num],str);/*在头文件string.h中的函数，把从src地址开始且含有NULL结束符的字符串复制到以dest开始的地址空间。*/
    if(num==0) break;
    j=-1;
    for(i=0; i<num; i++)
    {
        if(strcmp(str,str1[i])==0)/* 如果相同重新出题 */
    {    j=1;break;}
     }
     if(j<0)
      break;
   }
  }
  printf("%s\n",str);
  /* 回答 */
  printf("输入计算结果:\n");
  while(1)
  {
   scanf("%d",&result);
   k++;
   if(result==c)
   {
    printf("回答正确!\n");
    add+=score[k-1];
    break;
   }
   else if(k<3)
   {
    printf("错误,请重新回答:\n");
   }
   else 
   {    printf("错误,正确答案: %d\n",c);
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
