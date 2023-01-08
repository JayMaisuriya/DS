#include<stdio.h>
#include<conio.h>

struct tree{
int d;
struct tree *r;
struct tree *l;
};

typedef struct tree t;
t*p,*q;

void create(int data,t **p)
{
int i;
if(*p==NULL)
{
t*newn;
newn=(t*)malloc(sizeof(t));
newn->d=data;
newn->r=NULL;
newn->l=NULL;

*p=newn;
}
else
{
q=*p;
if(data>q->d)
create(data,&q->r);
else
create(data,&q->l);
}
}

void inorder(t*p)
{
if(p!=NULL)
{
inorder((p->l));
printf("%d\n",p->d);
inorder((p->r));
}
}

void preorder(t*p)
{
if(p!=NULL)
{
printf("%d\n",p->d);
preorder((p->l));
preorder((p->r));
}
}



 void posorder(t*p)
{
if(p!=NULL)
{
preorder((p->l));
preorder((p->r));
}
}



void display(t*p)
{
if(p!=NULL)
{
printf("\n**TREE**\n");
printf("%d<--%d-->%d\n",p->l->d,p->d,p->r->d);

display((p->l));
display((p->r));
}
}


void main()
{
int c=0,i;
t*root=NULL;
clrscr();
while(c<5)
{
printf("\n------------------------------------------");
printf("\n1.Create Tree\n2.Inorder Travrsing\n3.Preorder Traversing\n4.Posorder Traversing\n5.Display Tree");
printf("\n------------------------------------------");

printf("\nEnter Your Choice:");
scanf("%d",&c,"\n");
if(c==1)
{
printf("Enter Number:");
scanf("%d",&i);
create(i,&root);
}
else if(c==2)
{
inorder(root);
}

else if(c==3)
{
preorder(root);
}
else if(c==4)
{
posorder(root);
}
else
display(root);
}
getch();
}