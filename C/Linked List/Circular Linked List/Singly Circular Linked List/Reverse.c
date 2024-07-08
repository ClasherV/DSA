/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=0,*tail=0,*temp,*newnode;
    int choice,count;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=tail=temp=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice);
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d",tail->next->data);

    struct node* prevnode,*currentnode,*nextnode;
    prevnode=tail;
    currentnode=nextnode=head;
    do
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }while(prevnode!=tail);
    head=tail;
    tail=currentnode;
    temp=head,count=0;
    printf("\nLinked List: ");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
    printf("\n\nNumber of Nodes is: %d\n\n",count);
    printf("First Node: %d",tail->next->data);
    return 0;
}
*/