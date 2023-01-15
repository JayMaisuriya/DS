#include<stdio.h>
#include<conio.h>

void quick(int x[],int LB,int UB)
{
int k,ki,kj,f=1,temp,i,j;
k=x[LB];
ki=LB;
kj=UB;
if(LB<UB)
{

while(f)
{
while(x[ki]<=k)
ki++;
while(x[kj]>k)
kj--;
if(ki<kj)
{
	temp=x[ki];
	x[ki]=x[kj];
	x[kj]=temp;
	}
else
f=0;
}
printf("\nBefore Swapping Key value:");
for(i=LB;i<UB;i++)
{
printf("%d ",x[i]);}

temp=x[LB];
x[LB]=x[kj];
x[kj]=temp;

getch();
quick(&x[0],LB,kj-1);
quick(&x[0],kj+1,UB);
}
}

void main()
{
int a[10],LB,UB,i;
clrscr();
for(i=0;i<10;i++)
	{
	printf("Enter Element:");
	scanf("%d",&a[i]);
	}

printf("\nEnterd Data:");
for(i=0;i<10;i++)
{
printf("%d ",a[i]);
}

quick(&a[0],0,10-1);

printf("\nSorted Array:");
for(i=0;i<10;i++)
{

printf("%d ",a[i]);
}
getch();
}