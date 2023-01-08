#include<stdio.h>
#include<stdlib.h>

void main()
{
int a[5],pass,i,temp,size=5;
clrscr();
for(i=0;i<size;i++)
{
printf("Enter Element:");
scanf("%d",&a[i]);
}

for(pass=0;pass<size-1;pass++)
{
for(i=0;i<size-pass-1;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}

printf("\nOutput of %dpass: ",pass);
for(i=0;i<size;i++)
{
printf("%d  ",a[i]);
}
}

printf("\nSorted Array: ");
for(i=0;i<size;i++)
{
printf("%d  ",a[i]);
}
getch();
}