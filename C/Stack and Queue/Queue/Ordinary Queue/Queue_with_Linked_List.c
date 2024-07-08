/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0;
void enqueue()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    if(front==0&&rear==0)
    {
        printf("\nQueue is Empty\n");
    }
    else if(front==rear)
    {
        printf("Dequeued Element is %d\n",front->data);
        front=rear=0;
    }
    else
    {
        struct node* temp;
        temp=front;
        printf("Dequeued Element is %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("\nQueue is Empty\n\n");
    }
    else
    {
        printf("\nFront Element is %d\n",front->data);
    }
}
void display()
{
    if(front==0&&rear==0)
    {
        printf("\nQueue is Empty\n\n");
    }
    else
    {
        struct node* temp;
        temp=front;
        printf("\nQueue: ");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n\n");
    }
}
void isEmpty()
{
    if(front==0&&rear==0)
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
        printf("Enter 6 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter how much Elements You want to Enqueue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        enqueue();
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
            case 6: printf("\nProgram Stopped");
                    break;
            default: printf("Enter a Valid Case");
        }
    }while(choice!=7);
    return 0;
}
*/