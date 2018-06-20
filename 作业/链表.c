#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef char ElemType;
typedef int Status;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;//typedef LNode *LinkList;
LinkList Create(void)//���������� 
{
	LinkList head,s,r;//LNode *head,*s,*r;
	ElemType ch;
	head=(LNode*)malloc(sizeof(LNode));
	if(head==NULL){
		printf("���ܷ���ռ䣡����");
		exit(ERROR);
	}
	r=head;
	printf("������������������ݣ�\n");
	while((ch=getchar())!='\n'){
		s=(LNode*)malloc(sizeof(LNode));
		if(s==NULL){
			printf("���ܷ���ռ䣡����");
			exit(ERROR);
		}
		s->data=ch;//��ֵ����ͷ���head��next��S 
		r->next=s;//��S����r��next���� 
		r=s;
	}
	r->next=NULL;
	return head;
}
Status GetElem(LinkList head,int i,ElemType e)//���ҵ�i�����ݣ���ֵ��e 
{
	LinkList p=head->next;
	int j=1;
	while(p&&j<i){
		p=p->next;
		++j;
	}
	if(!p||j>i){
		printf("�����ݲ����ڣ�����\n");
		return ERROR;
	}
	e=p->data;
	printf("��Ҫ���ҵ�����Ϊ%c\n",e);
	return OK;
}
Status ListInsert(LinkList head,int i,ElemType e)//�ڵ�i������ǰ��������e 
{
	LinkList s;
	LinkList p=head;//������ǰ����������� 
	int j=0;
	while(p&&j<i-1){ 
		p=p->next;
		++j;//�ȼ�һ����ʹ�� 
	}//Ѱ�ҵ�i-1����� 
	if(!p||j>i-1){
		printf("δ�ҵ���%d����㣡����\n",i-1);
		exit(ERROR);
	}
	s=(LNode*)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;
	p->next=s;
}
Status ListDelete(LinkList head,int i)//ɾ����i������ 
{
	LinkList p=head,q;
	int j=0;
	while(p->next&&j<i-1){
		p=p->next;
		++j;
	}//Ѱ�ҵ�i����㣬��pָ����ǰ��
	if(!(p->next)||j>i-1){
		printf("��Ҫɾ����λ�ò���������\n");
		return ERROR;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	return OK;
}
int main()
{
	LinkList s,p;
	int i,i1,i2;
	ElemType e;
	p=Create();//pΪͷָ��,������ 
	printf("�������������Ϊ��\n");
	for(s=p->next;s!=NULL;s=s->next){
		printf("%c",s->data);
	}
	printf("\n");
	printf("������Ҫ��������ݺ�λ�ã�\n");
	scanf("%c%d",&e,&i);//����ʱ����������char�� 
	ListInsert(p,i,e);
	printf("�ڵ�%d��λ�ò�������%c���������������Ϊ��\n",i,e);
	for(s=p->next;s!=NULL;s=s->next){
		printf("%c",s->data);
	}
	printf("\n");
    printf("������Ҫ���ҵڼ������ݣ�\n");
	scanf("%d",&i1);
	GetElem(p,i1,e);	
	printf("��������Ҫɾ���ڼ������ݣ�\n");
	scanf("%d",&i2);
	ListDelete(p,i2);
	printf("ɾ�����������������Ϊ��\n");
	for(s=p->next;s!=NULL;s=s->next){
		printf("%c",s->data);
	}
	printf("\n");
	getch();
	return 0;
}
