
#include <stdio.h>
#include <stdlib.h>
typedef struct LinkList 
{
	int data; 
	struct LinkList *next; 
} LinkList;
void TailCreatLinkList(LinkList *L) 
{
	LinkList *s;
	L->next = NULL;
	for (int i = 0; i < 10; i++) {
	s = (struct LinkList*) malloc(sizeof(struct LinkList));
	s->data = i; 
	s->next = L->next; 
	L->next = s;
	L = s; 
	}
	L->next = NULL; 

}
void HeadCreatLinkList(LinkList *L) 
{
	LinkList *s;
	L->next = NULL;
	for (int i = 0; i < 10; i++) {
	s = (struct LinkList*) malloc(sizeof(struct LinkList));
	s->data = i;
	s->next = L->next;

	L->next = s; 
	}
}
 NZ(LinkList *L) 
{

	LinkList *new_head,*temp;
	new_head = NULL;
		L=L->next 	;
	while(L->next!=NULL)
	{
		temp = L->next;  
		L->next = new_head;
		new_head = L;
		L = temp;
	    
	
	}
	L->next = new_head; 
	//printf("%d ", new_head->data);  
	LinkList *p = L;
	while (p ->next!= NULL) {
	printf("%d ", p->data);
	p = p->next;

	}
	printf("\n");
	
	
                                            
}

void Add(LinkList *L) 
{ 	
     int a,b,i=0;
     printf("输入要插入的位置");
     scanf("%d",&a);
     printf("输入要插入的数字");
     scanf("%d",&b);
	 LinkList *p;
	 LinkList *t;
	 t = (struct LinkList*)malloc(sizeof(struct LinkList));
	 p = (struct LinkList*)malloc(sizeof(struct LinkList));
	 p = L->next;
	 t->next = NULL;
	 t->data = b;
   while(i!=a)
   {
   	p = p->next; 
   	i++;
   }
   t->next = p->next;
   p->next = t;

}

void Delete(LinkList *L) 
{ 
     int a,i=0;
     printf("输入要删除的节点位置");
     scanf("%d",&a);
	 LinkList *p;
	 LinkList *t;   //建立要插入的节点为t
	 t = (struct LinkList*)malloc(sizeof(struct LinkList));  
	 p = (struct LinkList*)malloc(sizeof(struct LinkList)); 
	 p = L->next;   
	 t = NULL;      
     a=a-1;
     while(i!=a)
     {
     	p = p->next;
     	i++;
	 }
    t = p->next ;        
    p->next = t->next ;  
	free(t);            
}

void DisPlay(LinkList *L) 
{ 	

	LinkList *p = L->next;
	 while (p->next!=NULL){
	 p = p->next;
	printf("%d ", p->data);
	
	}
	printf("\n");
}
int main() 
{
	LinkList *L1, *L2,*L3;
	L1 = (struct LinkList*) malloc(sizeof(struct LinkList));
	L2 = (struct LinkList*) malloc(sizeof(struct LinkList));
	L3 = (struct LinkList*) malloc(sizeof(struct LinkList));
	HeadCreatLinkList(L1);
	DisPlay(L1);
	TailCreatLinkList(L2);
	DisPlay(L2);
	NZ(L1); 
    Add(L2);
    DisPlay(L2);
    Delete(L2) ;
    DisPlay(L2);
	
}
