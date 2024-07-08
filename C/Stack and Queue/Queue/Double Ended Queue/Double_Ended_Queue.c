#include <stdio.h>
#define N 5
int front=-1;
int rear=-1;
int Deque[N];
void enqueuefront(int x)
{
    if((front==0&&rear==N-1)||(front==rear+1))
    {
        printf("\nQueue is Full\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        Deque[front]=x;
    }
    else if(front==0)
    {
        front=N-1;
        Deque[front]=x;
    }
    else
    {
        front--;
        Deque[front]=x;
    }
}
void enqueuerear(int x)
{
    if((front==0&&rear==N-1)||(front==rear+1))
    {
        printf("\nQueue is Full\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        Deque[rear]=x;
    }
    else if(rear==N-1)
    {
        rear=0;
        Deque[rear]=x;
    }
    else
    {
        rear++;
        Deque[rear]=x;
    }
}
void dequeuefront()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty\n");
        front--,rear--;
    }
    else if(front==rear)
    {
        printf("Dequeued Element is: %d\n\n",Deque[front]);
        front=rear=-1;
    }
    else if(front==N-1)
    {
        printf("Dequeued Element is: %d\n",Deque[front]);
        front=0;
    }
    else
    {
        printf("Dequeued Element is: %d\n",Deque[front]);
        front++;
    }
}
void dequeuerear()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty\n");
        front--,rear--;
    }
    else if(front==rear)
    {
        printf("Dequeued Element is: %d\n\n",Deque[rear]);
        front=rear=-1;
    }
    else if(rear==0)
    {
        printf("Dequeued Element is: %d\n",Deque[rear]);
        rear=N-1;
    }
    else
    {
        printf("Dequeued Element is: %d\n",Deque[rear]);
        rear--;
    }
}
void getfront()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nFront Element is: %d",Deque[front]);
    }
    printf("\n\n");
}
void getrear()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else 
    {
        printf("\nRear Element is: %d",Deque[rear]);
    }
    printf("\n\n");
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        int i=front-1;
        printf("\nQueue: ");
        do
        {
            i=(i+1)%N;
            printf("%d ",Deque[i]);
        }while(i!=rear);
    }
    printf("\n\n");
}
void isEmpty()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else 
    {
        printf("\nQueue is not Empty");
    }
    printf("\n\n");
}
void isFull()
{
    if((front==0&&rear==N-1)||(front==rear+1))
    {
        printf("\nQueue is Full");
    }
    else
    {
        printf("\nQueue is not Full");
    }
    printf("\n\n");
}
int main()
{
    int choice,n,data;
    do
    {
        printf("Enter 1 to Enqueue at Front\n");
        printf("Enter 2 to Enqueue at Rear\n");
        printf("Enter 3 to Dequeue from Front\n");
        printf("Enter 4 to Dequeue from Rear\n");
        printf("Enter 5 to get Front Element\n");
        printf("Enter 6 to get Rear Element\n");
        printf("Enter 7 to Display\n");
        printf("Enter 8 to Check Queue is Empty\n");
        printf("Enter 9 to Check Queue is Full\n");
        printf("Enter 10 to Exit\n\n");
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
                        enqueuefront(data);
                    }
                    printf("\n");
                    break;
            case 2: printf("\nEnter how much Elements You want to Enqueue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        printf("Enter the Data: ");
                        scanf("%d",&data);
                        enqueuerear(data);
                    }
                    printf("\n");
                    break;
            case 3: printf("\nEnter how much Elements You want to Dequeue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        dequeuefront();
                        if(front==-2&&rear==-2)
                        {
                            front++,rear++;
                            break;
                        }
                    }
                    printf("\n");
                    break;
            case 4: printf("\nEnter how much Elements You want to Dequeue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        dequeuerear();
                        if(front==-2&&rear==-2)
                        {
                            front++,rear++;
                            break;
                        }
                    }
                    printf("\n");
                    break;
            case 5: getfront();
                    break;
            case 6: getrear();
                    break;
            case 7: display();
                    break;
            case 8: isEmpty();
                    break;
            case 9: isFull();
                    break;
            case 10: printf("\nProgram Finished");
                     break;
            default: printf("\nEnter a Valid Choice\n\n");
        }
    }while(choice!=10);
    return 0;
}