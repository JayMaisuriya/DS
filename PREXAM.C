#include<stdio.h>
#include<conio.h>
int stack[5],i,top=-1;
void push();
void pop();
void show();

void main()
{ int ch;
  printf("\n1.push\n2.pop\n3.show\n");
  printf("Enter Choice :");
  scanf("%d",&ch);
  for(i=0;i<=5;i++)
  while(1)
  {
   switch(ch)
   {
     case 1:
     {
	push();
	break;
     }
     case 2:
     {
	pop();
	break;
     }
     case 3:
     {
	show();
	break;
     }
     default:
     {
	printf("invalide Choice!");
	break;
     }
    }
  }
 getch();
}


void push()
{
 int item;
 if(top==5-1)
  {
   printf("stack is Overflow!!");
  }
 else
  {
   printf("Enter the value: ");
   scanf("%d",&item);
   stack[top]=item;
   top+=1;
  }
}

void pop()
{
 if(top==-1)
  {
   printf("stack is underflow!!");
  }
 else
  {
   printf("popped= %d",&stack[top]);
   top-=1;
  }
}

void show()
{ int i;
  for(i=top;i>=0;i--)
   {
    printf("%d\n",stack[i]);
   }
  if(top==-1)
   {
    printf("Stack is Empty");
   }
}