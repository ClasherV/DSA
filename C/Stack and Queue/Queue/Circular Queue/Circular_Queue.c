/*
#include <stdio.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue(int x)
{
    if((front==0&&rear==N-1)||(front==rear+1))
    {
        printf("\nQueue is Full\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else if(front==rear)
    {
        printf("Dequeued Element is %d\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued Element is %d\n",queue[front]);
        front=(front+1)%N;
    }
}
void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\nFront Element is %d\n",queue[front]);
    }
}
void display()
{
    int i=front-1;
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nQueue: ");
        do
        {
            i=(i+1)%N;
            printf("%d ",queue[i]);
        }while(i!=rear);
    }
    printf("\n\n");
}
void isFull()
{
    if(rear==N-1)
    {
        printf("\nQueue is Full\n");
    }
    else
    {
        printf("\nQueue is not Full\n");
    }
}
void isEmpty()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\nQueue is not Empty\n");
    }
}
int main()
{
    int choice,n,data;
    do
    {
        printf("Enter 1 to Enqueue\n");
        printf("Enter 2 to Dequeue\n");
        printf("Enter 3 to Peek\n");
        printf("Enter 4 to Display\n");
        printf("Enter 5 to Check Queue is Empty\n");
        printf("Enter 6 to Check Queue is Full\n");
        printf("Enter 7 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter how much Elements You want to Enqueue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        printf("Enter the Data: ");
                        scanf("%d",&data);
                        enqueue(data);
                    }
                    printf("\n");
                    break;
            case 2: printf("\nEnter how much Elements You want to Dequeue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        dequeue();
                    }
                    printf("\n");
                    break;
            case 3: peek();
                    printf("\n");
                    break;
            case 4: display();
                    break;
            case 5: isEmpty();
                    printf("\n");
                    break;
            case 6: isFull();
                    printf("\n");
                    break;
            case 7: printf("\nProgram Stopped");
                    break;
            default: printf("Enter a Valid Case");
        }
    }while(choice!=7);
    return 0;
}
*/