/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head=0,*tail=0,*temp,*newnode;
    int choice,count;
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
            tail->next=newnode;
            tail->prev=newnode;
        }
        else
        {
            newnode->next=tail->next;
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
        head->prev=newnode;
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("Front Node: %d",tail->next->data);
    printf("\nLast Node: %d",head->prev->data);
    temp=tail,count=0;
    printf("\nLinked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("Front Node: %d",tail->next->data);
    printf("\nLast Node: %d",head->prev->data);

    struct node *prevnode,*currentnode,*nextnode;
    prevnode=tail;
    currentnode=nextnode=head;
    do
    {
        nextnode=nextnode->next;
        currentnode->prev=nextnode;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }while(prevnode!=tail);
    head=prevnode;
    tail=currentnode;
    temp=head,count=0;
    printf("\nLinked List from Head to Tail: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("Front Node: %d",tail->next->data);
    printf("\nLast Node: %d",head->prev->data);
    temp=tail,count=0;
    printf("\nLinked List from Tail to Head: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->prev;
        count++;
    }while(temp!=tail);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("Front Node: %d",tail->next->data);
    printf("\nLast Node: %d",head->prev->data);
    return 0;
}
*/