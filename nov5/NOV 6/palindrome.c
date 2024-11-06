#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int r=0;
   int temp=n;
   
   while (n!=0)
   {
    int rem=n%10;
    r=r*10+rem;
    n=n/10;


   }
  printf("r and n %d %d\n   ",r,n);
   if(r==temp)
   {
    printf("palndrme");

   }
   else{
    printf("not a palindrome");
   }


}