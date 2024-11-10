#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push(){
    int data;
    printf("enter the data: ");
    scanf("%d",&data);
    if(top==n-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top]=data;
    }
}
void pop()
{
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("underflow");

    }
    else{
        printf("%d",stack[top]);

    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}


int main()
{ 
        int ch;

    do
{

    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
        default:printf("invalid");
    }
    }    while(ch!=0);

}