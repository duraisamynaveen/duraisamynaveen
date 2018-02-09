#include<stdio.h>
#include<conio.h>
void main()
{
  int s=0,n,n1
  clrscr();
  printf(" Enter the value");
  n1=n;
  while(n>0)
  {
   remainder=n%10;
   s=s+remainder*remainder*remainder;
   n=n/10;
   }
   if(n1==s)
   {
   printf("Armstrong number");
   }
   else
   {
   printf("Not armstrong number");
   }
   getch();
   }
