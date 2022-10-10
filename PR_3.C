#include<stdio.h>
#include<conio.h>
int seq_search(int a[],int n,int k)
{
int i=0,m=-1;
a[n]=k;
while(i<n)
	{
	if(a[i]==k)
	{
	m=i;
	break;
	}
	i++;
	}
if(i==n)
return -1;
else
return m;
}
void main()
{
int a[11],i,n,k,f;
clrscr();
printf("enter number of elements (must be less then 10): ");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	printf("enter number of a[%d]:",i);
	scanf("%d",&a[i]);
	}
printf("enter key to be searched: ");
scanf("%d",&k);
a[n]=k;
if((f=seq_search(a,n,k))!=-1)
	{
	printf("searched elements is at index %d",f);
	}
else
	printf("unseccessfull serched!");
	getch();
}
