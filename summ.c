#include<stdio.h>
#include<conio.h>
int main()
{

   int n,rem=0,sum=0,count=0,i,j;
   scanf("%d",&n);
   while(n!='\0')
   {
       rem=n%10;
       sum=sum+rem;
       n=n/10;
}
printf("%d",sum);
   
}
