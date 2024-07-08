/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node *top=0;
void push()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->link=top;
    top=newnode;
}
void pop()
{
    struct node *temp;
    if(top==0)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("Popped Element is %d\n",top->data);
        temp=top;
        top=top->link;
        free(temp);
    }   
}
void peek()
{
    if(top==0)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("\nTop Element is %d\n",top->data);
    }
}
void display()
{
    if(top==0)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        struct node *temp=top;
        printf("\nStack: ");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("\n\n");
    }
}
void isEmpty()
{
    if(top==0)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        printf("\nStack is not Empty\n");
    }
}
int main()
{
    int choice,n,data;
    do
    {
        printf("Enter 1 to Push\n");
        printf("Enter 2 to Pop\n");
        printf("Enter 3 to Peek\n");
        printf("Enter 4 to Display\n");
        printf("Enter 5 to Check Stack is Empty\n");
        printf("Enter 6 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter how much Elements You want to Push in the Stack: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        push(data);
                    }
                    printf("\n");
                    break;
            case 2: printf("\nEnter how much Elements You want to Pop from the Stack: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        pop();
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
    }while(choice!=6);
    return 0;
}
*/