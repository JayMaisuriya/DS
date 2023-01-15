#include<stdio.h>
#include<conio.h>
void main()
{
  int a[8],flag,i,temp,gap=1,k,size=8;
  clrscr();
  for(i=0;i<size;i++)
   {
     printf("Enter Element: ");
     scanf("%d",&a[i]);
   }
  printf("\nEnterd Data: ");
  for(i=0;i<size;i++)
   {
     printf("%d ",a[i]);
   }
  gap=size/2;

  while(gap)
   {
     do
      {
	flag=0;
	for(i=0;i<size-gap;i++)
	 {
	   if(a[i]>a[gap+i])
	    {
	      printf("\nSwapping between %d ",a[i],a[i+gap]);
	      temp=a[i];
	      a[i]=a[i+gap];
	      a[i+gap]=temp;
	      flag=1;
	    }
	 }
	printf("\nOutput for gap %d : ",gap);
	for(k=0;k<size;k++)
	 {
	  printf("%d ",a[k]);
	 }
      }
   }
 getch();
}