#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%3)==0 && (n%5)==0)
    {
    printf("divisible by both\n");
        }
    
    else if((n%3==0))
    {
        printf("divisble by 3\n");
    }
    else if((n%5)==0)
    {
        printf("divisble by 5\n");

    }
    else{
        printf("Neither\n");
    }
}