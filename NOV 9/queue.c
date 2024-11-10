#include<stdio.h>
#define n 5
int queue[n];
int rear=0,front=-1;
void enqueue(){
    int data;
    printf("enter the data: ");
    scanf("%d",&data);
    if(rear==n-1){
        printf("overflow");
    }
    else if(front==-1 && rear==-1){
        front++;
     rear++;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else {
        front--;
    }
}
void display(){
    for(int i=front;i<=rear;i++)
    printf("%d",queue[i]);
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
        enqueue();
        break;
        // // case 2:
        dequeue();
        break;
        case 3:display();
        break;
        default:printf("invalid");
    }
    }    while(ch!=0);

}
    