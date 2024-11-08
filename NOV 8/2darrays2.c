#include<stdio.h>
int main()
{
   int r,c;
   printf("Enter row and column size:");
   int a[r][c];
   printf("enter elements");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        
        {
            scanf("%d ",&a[i][j]);
        }
    }
        printf("elements are:");
         for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        
        {
            printf("%d ",a[i][j]);
        }
        
        printf("\n");
        }
}
