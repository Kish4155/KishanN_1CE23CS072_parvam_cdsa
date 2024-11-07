#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        int sum=r+sum;
        n=n/10;
    }
    
    if((temp%sum)==0)
    {
        printf("harshad number");
    }
    else{
        printf("not harshad");
    }
    

}