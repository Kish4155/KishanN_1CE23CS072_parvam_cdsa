#include<stdio.h>
int main()
{
   int n;
   int r=0;
   scanf("%d",&n);
   while (n!=0)
   {
    int rem=n%10;
    r=r*10+rem;
    n=n/10;


   }

printf("%d\n",r);
}