#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
int d;

struct student *next;
};
typedef struct student ll;

int node_count(ll**root)
{
int c=0;
ll*p;
p=*root;

while(p!=NULL)
{
c++;
p=p->next;
}
return c;
}

//create
void createll(ll**r,int n)
{
ll*newnode;
newnode=(ll*)malloc(sizeof(ll));
newnode->d=n;
newnode->next=NULL;
if(r==NULL)
{
*r=newnode;
}

else
{
newnode->next=*r;
*r=newnode;
}
}

//insertion in end
void insend(ll **r,int n)
{
ll*newnode,*p;
newnode=(ll *)malloc(sizeof(ll));
newnode->d=n;
newnode->next=NULL;
p=*r;

while(p->next!=NULL)
{
p=p->next;
}

p->next=newnode;
}

//search
int node_search(ll**root,int data)
{
int c=0;
ll*p;
p=*root;

while(p!=NULL)
{
c++;
if(p->d==data)
{
break;
}

p=p->next;
}

if(c>0 &&p!=NULL)
return c;
else
return -1;
}


//delete
void node_delete(ll**root,int data)
{
ll*x,*p;
p=*root;

if(data==(*root)->d)
{
*root=(*root)->next;
free(p);
}

else
if(node_search(&(*root),data)!=-1)
{
while(p!=NULL)
{
if(p->next->d==data)
{
break;
}
p=p->next;
}

x=p->next;
p->next=p->next->next;
free(x);
}
else
printf("Node to be deleted is not found!");
}

//display
void display(ll**root)
{
ll*p;
p=*root;

while(p!=NULL)
{
printf("\nDATA:%d",p->d);
p=p->next;
}
}


void main()
{
int ch,n,pos;
ll*root,*p,*newnode;

root=NULL;
clrscr();
do
{

printf("\n--------------------------------------------------------------");
printf("\nPress 1 for creating Link list.\n");
printf("Peess 2 for Inserting New Node in the end.\n");
printf("Press 3 for For Search Node by data.\n");
printf("Press 4 for Delete Node by Data.\n");
printf("Press 5 for Display Link List.\n");
printf("--------------------------------------------------------------\n");
printf("Enter your choice:");
scanf("%d",&ch);


switch(ch)
{
case 1:
printf("Enter Number:");
scanf("%d",&n);

createll(&root,n);
break;


case 2:
printf("Enter Number:");
scanf("%d",&n);
insend(&root,n);
break;

case 3:
printf("\nEnter Node to be searched:");
scanf("%d",&n);
pos=node_search(&root,n);

if(pos!=-1)
	printf("\nNode Found at Position !%d",pos);
else
	printf("\nNode not available!");
break;

case 4:
printf("\nEnter Node to be deleted:");
scanf("%d",&n);
node_delete(&root,n);
break;

case 5:
display(&root);
break;

default:
printf("\nThank You !!");
break;
}

printf("\nPress1 to continue:");
scanf("%d",&ch);
}
while(ch==1);
getch();
}