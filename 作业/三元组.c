#include <stdio.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef char ElemType;
typedef struct
{
    ElemType e[3];
}Triplet;
Status initTriplet(Triplet T,ElemType v0,ElemType v1,ElemType v2)
{
	Triplet T;
	T=(Tripiet*)malloc(3 * sizeof(Triplet));
    (*T).e[0]=v0;
    (*T).e[1]=v1;
    (*T).e[2]=v2;
    return OK;
}
Status destoryTriplet(Triplet T)
{
    return OK;
}
Status getElem(Triplet T,int i,ElemType e)
{
    if(i<1||i>3)
    return ERROR;
    else e=T.e[i-1];
    return OK;
}
Status putElem(Triplet T,int i,ElemType e)
{
    if(i<1||i>3)
    return ERROR;
    else T.e[i-1]=e;
    return OK;
}
Status getMax(Triplet T,ElemType e)
{
    if(T.e[0]>T.e[1])
    e=T.e[0];
    else
    e=T.e[1];
    if(T.e[2]>e)
    e=T.e[2];
    return e;
}
Status getMin(Triplet T,ElemType e)
{
    if(T.e[0]<T.e[1])
    e=T.e[0];
    else
    e=T.e[1];
    if(T.e[2]<e)
    e=T.e[2];
    return e;
}
int main()
{
    Triplet T;
    int i;
    ElemType v0,v1,v2;
    Status flag,e;
    printf("��������Ԫ�������ֵ��\n");
    scanf("%f%f%f",&v0,&v1,&v2);
    initTriplet(T,v0,v1,v2);
    //printf("%d,%d,%d",T.e[0],T.e[1],T.e[2]);
    printf("��ʼ��������,T������ֵΪ%4.2f,%4.2f,%4.2f.\n",T.e[0],T.e[1],T.e[2]);
    printf("��������Ҫ�����Ԫ��ĵڼ�λ��\n");
    scanf("%d",&i);
    getElem(T,i,e);
    printf("��%dλ��ֵ��%4.2f.\n",i,e);
    printf("������Ҫ������Ԫ��ĵڼ�λ��\n");
    scanf("%d",&i);
    putElem(T,i,e);
    printf("��Ԫ������ֵΪ��%4.2f,��СֵΪ��%4.2f.\n",getMax(T,e),getMin(T,e));
    destoryTriplet(T);
    getch();
    return 0;
}






















