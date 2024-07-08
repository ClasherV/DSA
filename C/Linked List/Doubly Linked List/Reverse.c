/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head=0,*tail=0,*temp,*newnode;
    int count,choice;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=tail=newnode;
        }
        else
        {
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You want to continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }
    printf("\n\nNumber of Nodes is: %d\n\n",count);

    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(currentnode!=tail)
    {
        currentnode->prev=currentnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=currentnode->next;
    }
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    temp=tail,count=0;
    printf("Linked List from Tail to Head: ");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    return 0;
}
*/