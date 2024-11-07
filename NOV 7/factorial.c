#include<stdio.h>
int main()
{
    int n,fac,i;
    scanf("%d",&n);
    fac=1;
    if(n==0)
    {
        printf("fac=1\n");

    }
    else
    {
        for(i=1;i<=n;i++)
        {
        fac=fac*i;
        
       
        } printf("fac= %d\n",fac);
    }
}
