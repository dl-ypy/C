#include <stdio.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElemType;
typedef struct
{
    int e[3];
}Triplet;
Status initTriplet(Triplet *T,int v0,int v1,int v2)
{
    *T=(ElemType*)malloc(3*sizeof(ElemType));                                                                                                                                                                                                  T=(Triplet)malloc(sizeof(Triplet));
    (*T).e[0]=v0;
    (*T).e[1]=v1;
    (*T).e[2]=v2;
    return OK;
}
int main()
{
    Triplet T;
    int i;
    int v0,v1,v2;
    Status flag,e;
    printf("请输入三元组的三个值：\n");
    scanf("%f%f%f",&v0,&v1,&v2);
    initTriplet(T,v0,v1,v2);
    printf("%d,%d,%d",T.e[0],T.e[1],T.e[2]);
    getch();
    return 0;
}
