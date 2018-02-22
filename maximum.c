#include<stdio.h>
int main()
{
    int n,m,i,hcf;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n && i<=m;i++)
    {
        if(n%i==1 && m%i==1)
        {
        hcf=i;
        
        }
       
    }
    
     printf("%d %d",hcf);
        return 0;
}
